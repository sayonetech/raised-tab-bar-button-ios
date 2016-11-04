//
//  RaisedCenterButton.h
//  RaisedCenterButton
//
//  Created by SayOne on 16/03/16.
//  Copyright © 2016 SayOne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RaisedCenterButton : UIButton

@property (copy, nonatomic) UIImage *buttonImage;

+ (id)buttonWithImage:(UIImage *)image forTabBarController:(UITabBarController *)tabBarController;

@end
