//
//  MatcharooAppDelegate.h
//  Matcharoo
//
//  Created by Benjamin Birnbaum on 30/09/10.
//  Copyright 2010 Wobolando. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MatcharooViewController;

@interface MatcharooAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MatcharooViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MatcharooViewController *viewController;

@end

