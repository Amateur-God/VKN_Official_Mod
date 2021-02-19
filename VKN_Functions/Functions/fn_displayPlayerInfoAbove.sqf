/*
Script name:  fn_displayPlayerInfoAbove.sqf
Created on:   09 July ‎2019
Author:       Curious

Description:  Clear all name icons and repalce with one above the client

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:      N/A
*/

//MUST BE MIRROR OF CONFIG
_credits = [
 ["item1", 59],
 ["item2", 12],
 ["item3",17],
 ["item4", 7],
 ["item5", 10],
 ["item6", 1],
 ["item7", 6]
];

//Loop through all players to get the title for the player.
{
  _curPlayer = _x;
  {
    _curItem = _x;
    _param = [_curItem,0,""] call bis_fnc_paramin;
    _resize = [_curItem,1,-1] call bis_fnc_paramin;
    _item = getarray (configfile >> "CfgCredits" >> "VKNCreditsRanks" >> _param);
    _namesinarray = _item select 1;
    _textformatted = "error";


      switch (_x) do {
        case (_credits select 6): {
            //Old Guard
            _title = _item select 0;
            _playerInArray = [name _curPlayer, str _namesinarray, false] call BIS_fnc_inString;
            if (_playerInArray) then {
              _textformatted = _title;
              _curPlayer setVariable ["VKN_Title_Above", _textformatted];
            };
        };
          case (_credits select 3): {
                //Aesir
                _title = _item select 0;
                _playerInArray = [name _curPlayer, str _namesinarray, false] call BIS_fnc_inString;
                if (_playerInArray) then {
                  _textformatted = _title;
                  _curPlayer setVariable ["VKN_Title_Above", _textformatted];
                };
          };
          case (_credits select 4): {
              //Hersir
              _title = _item select 0;
              _playerInArray = [name _curPlayer, str _namesinarray, false] call BIS_fnc_inString;
              if (_playerInArray) then {
                _textformatted = _title;
                _curPlayer setVariable ["VKN_Title_Above", _textformatted];
              };
          };
          case (_credits select 5): {
              //Jarl
              _title = _item select 0;
              _playerInArray = [name _curPlayer, str _namesinarray, false] call BIS_fnc_inString;
              if (_playerInArray) then {
                _textformatted = _title;
                _curPlayer setVariable ["VKN_Title_Above", _textformatted];
              };
          };
          case (_credits select 0): {
              //Viking
              _title = _item select 0;
              _playerInArray = [name _curPlayer, str _namesinarray, false] call BIS_fnc_inString;
              if (_playerInArray) then {
                _textformatted = _title;
                _curPlayer setVariable ["VKN_Title_Above", _textformatted];
              };
          };
      };
  } forEach _credits;

} forEach allUnits;


//Display text above players
onEachFrame {

  {
    _vis = [objNull, "VIEW"] checkVisibility [eyePos player, eyePos _x];
    _running = player getVariable ["VKN_Draw_Names_Above", false];
    if !(_running) then {
      if ((_vis == 1) && !(_x == player)) then {
      //EH
      _eh = addMissionEventHandler [
       "Draw3D",
       {
           player setVariable ["VKN_Draw_Names_Above", true];
           {
             _alphaText = linearConversion [2, 10, player distance _x, 1, 0, true];
             _titleAbove = _x getVariable ["VKN_Title_Above", " "];
             _title = toUpper _titleAbove select 0;
             drawIcon3D ["", [profileNamespace getVariable "IGUI_TEXT_RGB_R",profileNamespace getVariable "IGUI_TEXT_RGB_G",profileNamespace getVariable "IGUI_TEXT_RGB_B", _alphaText], _x modelToWorld[0,0,2], 0, 0, 0, format ["%1 %2", _title, name _x], 2, 0.025 / (getResolution select 5),"ExoMedium", "center"];
         } forEach allUnits;
       }
      ];
      /////////
      };

      if ((_vis < 1) && !(_x == player)) then {
        removeMissionEventHandler ["Draw3D", _eh];
        player setVariable ["VKN_Draw_Names_Above", false];
      };
    };
  } forEach allUnits;

};
