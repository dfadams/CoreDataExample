//
//  InsurancePROMasterViewController.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 22/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Event.h"
#import "EventDelegate.h"

@class InsurancePRODetailViewController;
@class InsurancePROInputViewController;
@class InsurancePROEditViewController;

#import <CoreData/CoreData.h>

@interface InsurancePROMasterViewController : UITableViewController <EventDelegate,NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) InsurancePRODetailViewController *detailViewController;
@property (strong, nonatomic) InsurancePROInputViewController *inputViewController;
@property (strong, nonatomic) InsurancePROEditViewController *editViewController;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSManagedObjectContext *addingManagedObjectContext;

@property (nonatomic, strong) Event *event;
@property (strong, nonatomic) id<EventDelegate> delegate;

@end
