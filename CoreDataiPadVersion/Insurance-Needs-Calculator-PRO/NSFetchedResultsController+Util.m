//
//  NSFetchedResultsController+Util.m
//  CoreDataExample
//
//  Created by Matias Roldan on 2/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "NSFetchedResultsController+Util.h"
#import "Event.h"

@implementation NSFetchedResultsController (Util)

-(BOOL)existEvent:(Event *)e {

    for (Event *event in self.fetchedObjects) {

        if ([event.name isEqualToString: e.name]) {
            return YES;
        }
    }
    return NO;
}

@end
