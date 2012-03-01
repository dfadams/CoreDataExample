//
//  Event.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 24/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSNumber * eventID;
@property (nonatomic, retain) NSString * name;

@end
