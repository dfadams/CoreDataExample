//
//  InsurancePROAppDelegate.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 22/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InsurancePROMasterViewController.h"

@interface InsurancePROAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UISplitViewController *splitViewController;

@end
