//
//  SubGame.h
//  MatleDemo
//
//  Created by huayu on 15/7/10.
//  Copyright (c) 2015年 kwep_vbn. All rights reserved.
//

#import "Game.h"

@interface SubGame : Game<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger user_id;

@property (nonatomic, copy) NSString *nick;

@property (nonatomic, copy) NSString *avatar;

@end
