//
//  MatcharooViewController.h
//  Matcharoo
//
//  Created by Benjamin Birnbaum on 30/09/10.
//  Copyright 2010 Wobolando. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MatcharooViewController : UIViewController {
	UIView *topLeft;
	UIView *topRight;
	UIView *bottomLeft;
	UIView *bottomRight;
}

@property(nonatomic, retain) IBOutlet UIView *topLeft;
@property(nonatomic, retain) IBOutlet UIView *topRight;
@property(nonatomic, retain) IBOutlet UIView *bottomLeft;
@property(nonatomic, retain) IBOutlet UIView *bottomRight;

@end

