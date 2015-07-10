//
//  Arena.h
//  MatleDemo
//
//  Created by huayu on 15/7/10.
//  Copyright (c) 2015年 kwep_vbn. All rights reserved.
//

#import "MTLModel.h"

#import "MTLJSONAdapter.h"

#import "NSDictionary+MTLMappingAdditions.h"

#import "MTLValueTransformer.h"

@class Leitai,Attachment,Player;

@interface Arena : MTLModel<MTLJSONSerializing>

@property (nonatomic, strong) Leitai *leitai;

@property (nonatomic, strong) Attachment *attachment;

@property (nonatomic, strong) NSArray *player_result;

@end

@interface Leitai : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger integral_get;


@property (nonatomic, copy) NSString *ring_code;

@end

@interface Attachment : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *invite_tips;


@end

@interface Player : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *nick;



@end

