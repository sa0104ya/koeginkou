//
//  AppDelegate.h
//  teamAI_KOEGINKOU
//
//  Created by ビザンコムマック０４ on 2014/11/11.
//  Copyright (c) 2014年 ビザンコムマック０４. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SecondViewController;
@class WebViewController;
@class bizanViewController;
@class tsurugisanViewController;

@interface AppDelegate : UIResponder<UIApplicationDelegate>{
    // グローバル変数
    NSMutableArray *didRejon;
}
@property (strong, nonatomic) UIWindow *window;
// ここに受け渡ししたい変数を宣言
@property (nonatomic, retain) NSMutableArray *didRejon;

@end

