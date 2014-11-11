//
//  SecondViewController.h
//  teamAI_KOEGINKOU
//
//  Created by ビザンコムマック０４ on 2014/11/11.
//  Copyright (c) 2014年 ビザンコムマック０４. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import "AppDelegate.h"

@interface SecondViewController : UIViewController<UITextFieldDelegate>
- (IBAction)rokuonStart:(UIButton *)sender;
- (IBAction)rokuonListen:(UIButton *)sender;
- (IBAction)bizantourokuButton:(UIButton *)sender;
- (IBAction)bunkanomoritourokuButton:(UIButton *)sender;

- (IBAction)tokushimajoukouentourokuButton:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UIButton *rokuonStartStopImage;
- (IBAction)userName:(UITextField *)sender;
@property (weak, nonatomic) IBOutlet UITextField *myTextField;
@property NSString *userName;
@property NSString *dateString;
@property (weak, nonatomic) IBOutlet UIButton *tokushimajoukouenTourokuImage;
@property (weak, nonatomic) IBOutlet UIButton *bizanTourokuImage;
@property (weak, nonatomic) IBOutlet UIButton *bunkanomoriTourokuImage;

@end

