//
//  ViewController.m
//  IGeShuiTaxSDKDemo
//
//  Created by xinwang on 2018/1/17.
//  Copyright © 2018年 杭州薪王信息技术有限公司. All rights reserved.
//

#import "ViewController.h"
#import <IGeShuiTaxSDK/GSTaxManage.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self testButton];
}
- (void)testButton {
    
    UIButton *btn = [[UIButton alloc] init];
    btn.backgroundColor = [UIColor blueColor];
    btn.frame = CGRectMake(15, 200, self.view.frame.size.width-30, 50);
    [btn setTitle:@"授权" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self.view addSubview:btn];
    [btn addTarget:self action:@selector(testClick) forControlEvents:UIControlEventTouchUpInside];
}

- (void)testClick {
    
    // 1.初始化个税SDK管理器
    GSTaxManage *manage = [[GSTaxManage alloc] init];
    
    // 设置默认登录城市名称、地理位置编码, 可选 否则为当前定位城市信息
//    manage.defaultCityName = @"上海";
//    manage.defaultCityId = @"310000";
    
    // 2.配置部分UI, 可选 默认主色调RGB:(6, 207, 197); 默认背景RGB:(242, 242, 242)
//    GSTaxConfiguration *configuration = [[GSTaxConfiguration alloc] init];
//    configuration.mainColor = [UIColor redColor];
//    configuration.backgroundColor = [UIColor lightGrayColor];
//    manage.configuration = configuration;
    
    // 3.调起SDK
    [manage requestGSWithApiKey:@"XW0201020000060000" uid:@"123" completionBlock:^(NSString *orderNumber, GSErrorCode errorCode) {
        
        // 结果回调
        NSLog(@"结果回调: %d \n %@",errorCode, orderNumber);
        
    } originViewController:self];
}
    

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
