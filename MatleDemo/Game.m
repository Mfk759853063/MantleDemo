//
//  Game.m
//  MatleDemo
//
//  Created by huayu on 15/7/10.
//  Copyright (c) 2015年 kwep_vbn. All rights reserved.
//

#import "Game.h"


@implementation Game

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    NSMutableDictionary *dict = [[NSDictionary mtl_identityPropertyMapWithModel:self] mutableCopy];
    dict[@"gameDescription"] = @"description";
    return dict;
}

+ (NSValueTransformer *)update_timeJSONTransformer
{
    return [MTLValueTransformer transformerUsingForwardBlock:^id(NSString *updateTime, BOOL *success, NSError *__autoreleasing *error) {
        return [NSDate dateWithTimeIntervalSince1970:updateTime.floatValue];
    } reverseBlock:^id(NSDate *value, BOOL *success, NSError *__autoreleasing *error) {
        return [NSString stringWithFormat:@"%f",[value timeIntervalSince1970]];
    }];
}

@end
