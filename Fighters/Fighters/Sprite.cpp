//
//  Sprite.cpp
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#include "Sprite.h"
#include "Sky.h"

void Sprite::draw(){
    Sky::getInstance()->getWindow()->draw(*this);
}