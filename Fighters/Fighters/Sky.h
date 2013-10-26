//
//  Sky.h
//  Fighters
//
//  Created by luckymark on 13-10-26.
//  Copyright (c) 2013年 luckymark. All rights reserved.
//

#ifndef __Fighters__Sky__
#define __Fighters__Sky__

#include <SFML/Graphics.hpp>

#include "Sprite.h"

#include <iostream>
#include <vector>
using namespace std;

class Sky{
public:
    static Sky* getInstance();
    
    sf::RenderWindow* getWindow(){
        return this->window;
    }
    void add(Sprite *);
    void del(Sprite *);
    void refresh();
private:
    Sky();
    
    sf::RenderWindow* window;
    vector<Sprite * > sprites;
    
    sf::Sprite* background=NULL;
    
    static Sky* instance;
};

#endif /* defined(__Fighters__Sky__) */
