//
//  Game.h
//  MatleDemo
//
//  Created by huayu on 15/7/10.
//  Copyright (c) 2015年 kwep_vbn. All rights reserved.
//

#import "MTLModel.h"
#import "MTLJSONAdapter.h"
#import "NSDictionary+MTLMappingAdditions.h"
#import "MTLValueTransformer.h"

@interface Game : MTLModel<MTLJSONSerializing>

@property (nonatomic, strong) NSDate *update_time;

@property (nonatomic, copy) NSString *app_unit;

@property (nonatomic, copy) NSString *_id;

@property (nonatomic, copy) NSString *app_control;

@property (nonatomic, copy) NSString *app_type;

@property (nonatomic, assign) NSInteger isenjoy;

@property (nonatomic, copy) NSString *app_id;

@property (nonatomic, copy) NSString *play_method;

@property (nonatomic, copy) NSString *app_icon_tag;

@property (nonatomic, copy) NSString *app_name;

@property (nonatomic, copy) NSString *challenge_invite_failed;

@property (nonatomic, assign) NSInteger app_player_nums;

@property (nonatomic, copy) NSString *game_label_desc;

@property (nonatomic, copy) NSString *app_compare_method;

@property (nonatomic, copy) NSString *score_interval;

@property (nonatomic, copy) NSString *enjoy;

@property (nonatomic, copy) NSString *gameDescription;

@property (nonatomic, copy) NSString *challenge_tips_nologin;

@property (nonatomic, copy) NSString *app_control_new;

@property (nonatomic, copy) NSString *challenge_invite_other_weixin;

@property (nonatomic, copy) NSString *grade_label;

@property (nonatomic, copy) NSString *bailei_invite;

@property (nonatomic, copy) NSString *gameproperty;

@property (nonatomic, assign) NSInteger is_play;

@property (nonatomic, copy) NSString *app_icon;

@property (nonatomic, copy) NSString *challenge_invite_weixin;

@property (nonatomic, copy) NSString *leizhu_invite_end;

@property (nonatomic, copy) NSString *help_url;

@property (nonatomic, copy) NSString *challenge_invite_end;

@property (nonatomic, copy) NSString *create_time;

@property (nonatomic, copy) NSString *play_description;

@property (nonatomic, copy) NSString *challenge_invite_success;

@property (nonatomic, copy) NSString *app_author;

@property (nonatomic, copy) NSString *challenge_invite_failed_weixin;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, copy) NSString *challenge_tips_failed;

@property (nonatomic, copy) NSString *challenge_invite_flat;

@property (nonatomic, copy) NSString *challenge_invite_flat_weixin;

@property (nonatomic, copy) NSString *app_order_by;

@property (nonatomic, assign) NSInteger is_leidou_recharge;

@property (nonatomic, copy) NSString *score_interval_system;

@property (nonatomic, copy) NSString *challenge_invite_other;

@property (nonatomic, copy) NSString *challenge_tips_success;

@property (nonatomic, copy) NSString *bailei_tips;

@property (nonatomic, copy) NSString *app_bg;

@property (nonatomic, assign) NSInteger max_socre;

@property (nonatomic, copy) NSString *app_url;

@property (nonatomic, copy) NSString *challenge_intro;

@property (nonatomic, copy) NSString *challenge_invite_success_weixin;

@end
