//
//  CellView.h
//  Matcharoo
//
//  Created by Benjamin Birnbaum on 30/09/10.
//  Copyright 2010 Wobolando. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MatcharooViewController;

@interface CellView : UIView {
	MatcharooViewController *matchController;
}

@property (nonatomic, retain) MatcharooViewController *matchController;

@end
