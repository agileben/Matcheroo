//
//  MatcharooViewController.h
//  Matcharoo
//
//  Created by Benjamin Birnbaum on 30/09/10.
//  Copyright 2010 Wobolando. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellView.h"

@interface MatcharooViewController : UIViewController {
	CellView *topLeft;
	CellView *topRight;
	CellView *bottomLeft;
	CellView *bottomRight;
}

@property(nonatomic, retain) IBOutlet CellView *topLeft;
@property(nonatomic, retain) IBOutlet CellView *topRight;
@property(nonatomic, retain) IBOutlet CellView *bottomLeft;
@property(nonatomic, retain) IBOutlet CellView *bottomRight;

@end

