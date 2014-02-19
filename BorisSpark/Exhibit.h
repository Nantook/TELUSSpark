//
//  Exhibit.h
//  BorisSpark
//
//  Created by Gellert on 2/18/2014.
//  Copyright (c) 2014 Gellert. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Exhibit : NSObject

@property NSString *name;
@property NSString *description;
@property NSString *questions;
@property NSString *buttonLabel;
@property UIImage *background;

- (id) initWithDescription:(NSString*)description Questions:(NSString*)questions ButtonLabel:(NSString*)buttonLabel Name:(NSString*)name Background:(NSString*)imageName;

@end