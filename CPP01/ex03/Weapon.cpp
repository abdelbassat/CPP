/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Weapon.cpp                 */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:41:59        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:41:59        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "Weapon.hpp"


void Weapon::setType(const std::string& aa)
{
    type = aa;
}
const std::string& Weapon::getType()
{
    const std::string &ref = type;
    return ref;
}

Weapon::Weapon(std::string typ)
{
    type = typ;
}


Weapon::Weapon()
{
}

Weapon::~Weapon(){};