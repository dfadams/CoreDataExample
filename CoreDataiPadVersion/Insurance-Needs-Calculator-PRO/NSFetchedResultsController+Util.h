//
//  NSFetchedResultsController+Util.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 28/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "Event.h"

@interface NSFetchedResultsController (Util)

-(BOOL)existEvent:(Event *)e;

@end
