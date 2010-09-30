//
//  MatcharooViewController.h
//  Matcharoo
//
//  Created by Benjamin Birnbaum on 30/09/10.
//  Copyright 2010 Wobolando. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MatcharooViewController : UIViewController {
	UIButton *topLeft;
	UIButton *topRight;
	UIButton *bottomLeft;
	UIButton *bottomRight;
}

@property(nonatomic, retain) IBOutlet UIButton *topLeft;
@property(nonatomic, retain) IBOutlet UIButton *topRight;
@property(nonatomic, retain) IBOutlet UIButton *bottomLeft;
@property(nonatomic, retain) IBOutlet UIButton *bottomRight;

@end

