//
//  ViewController.m
//  MatleDemo
//
//  Created by huayu on 15/7/10.
//  Copyright (c) 2015年 kwep_vbn. All rights reserved.
//

#import "ViewController.h"
#import "AFNetworking.h"
#import "Mantle.h"
#import "Game.h"
#import "SubGame.h"
#import "Arena.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    ///wydlz_game/games.json
//    /wydlz_game/one_leitai/2567.json
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    [manager GET:@"http://app.game.zhaopian.com/wydlz_game/one_leitai/2567.json" parameters:@{@"app_id":@(61)} success:^(NSURLSessionDataTask *task, id responseObject) {
        NSError *error ;
//        NSArray *games = [MTLJSONAdapter modelsOfClass:[Game class] fromJSONArray:[responseObject valueForKeyPath:@"response.games"] error:&error];
//        NSLog(@"games \n %@",games);
        Arena *arena = [MTLJSONAdapter modelOfClass:[Arena class] fromJSONDictionary:[responseObject valueForKeyPath:@"response"] error:&error];
        NSLog(@"%@",arena);
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@",error);
    }];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
