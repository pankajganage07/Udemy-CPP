// SPDX-License-Identifier: GPL-3.0
pragma solidity ^0.6.0;

contract simplestorage {
     
     //if not initilize it will be initilized to 0
     uint256 favnumber;

     function retrieve() public view returns(uint256) {
         return favnumber;
     }

     struct School {
         uint256 favnumber;
         string name;
     }

     School[] public apps;

     
}
