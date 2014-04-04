//
//  ViewController.h
//  BTGlassScrollViewExample
//
//  Created by Byte on 10/18/13.
//  Copyright (c) 2013 Byte. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTGlassScrollView.h"

@interface GlassViewController : UIViewController <UIScrollViewAccessibilityDelegate>

@property NSString *selectedGallery;
@property NSString *selectedExhibit;
@property NSString *test;

-(void)forceRedraw;

@end
