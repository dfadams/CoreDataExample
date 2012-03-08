//
//  InsurancePROEditViewController.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 5/03/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EventDelegate.h"
@class Event;

@interface InsurancePROEditViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Event *event;
@property (strong, nonatomic) id<EventDelegate> delegate;
@property (nonatomic, strong) IBOutlet UILabel *Label_ID;
@property (nonatomic, strong) IBOutlet UITextField *nameText;

@end
