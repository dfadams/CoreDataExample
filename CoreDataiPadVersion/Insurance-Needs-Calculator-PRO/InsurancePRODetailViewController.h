//
//  InsurancePRODetailViewController.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 22/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InsurancePROAppDelegate.h"
#import "Event.h"
#import "EventDelegate.h"

@interface InsurancePRODetailViewController : UIViewController <UISplitViewControllerDelegate> {
    
    IBOutlet UIView *portrait;
    IBOutlet UIView *landscape;
}

@property(nonatomic,retain) UIView *portrait;
@property(nonatomic,retain) UIView *landscape;

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) Event *event;
@property (strong, nonatomic) id<EventDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *Label_InfoP;
@property (strong, nonatomic) IBOutlet UILabel *Label_InfoL;

@end
