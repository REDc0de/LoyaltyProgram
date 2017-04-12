//
//  News.h
//  LoayaltyProgram
//
//  Created by Bogdan Chaikovsky on 12.04.17.
//  Copyright © 2017 Bogdan Chaikovsky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface News : NSObject

@property (weak, nonatomic) NSString *title;
@property (weak, nonatomic) NSString *imageURL;
@property (weak, nonatomic) NSString *info;
@property (weak, nonatomic) NSString *date;

- (id)initWithTitle:(NSString*)title imageURL:(NSString*)imageURL info:(NSString*)info date:(NSString*)date;

@end