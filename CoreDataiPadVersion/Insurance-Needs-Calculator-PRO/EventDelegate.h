//
//  EventDelegate.h
//  Insurance-Needs-Calculator-PRO
//
//  Created by Daniel Adams on 27/02/12.
//  Copyright (c) 2012 A+Apps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Event.h"

@protocol EventDelegate <NSObject>

-(void) saveEvent; 
-(void) cancelEvent;
-(BOOL) existEvent:(Event *)e;

@end
