//
//  Background.h
//  ForeignJump
//
//  Created by Francis Visoiu Mistrih on 25/07/13.
//  Copyright Epimac 2013. All rights reserved.
//


// Background

#import "Hero.h"
#import "InGame.h"

@interface Background : CCLayer {
    CCSprite* background;
    CCSprite* sun;
    BOOL animation;
}

@property (nonatomic, strong) CCSprite* sun;
@property (nonatomic, readwrite) BOOL animation;

- (void) initWithHero:(Hero*)hero_ andWorldWidth:(float)width;

@end
