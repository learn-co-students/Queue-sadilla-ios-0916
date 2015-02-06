//
//  FISQueue.h
//  Queue-sadilla
//
//  Created by Chris Gonzales on 2/6/15.
//  Copyright (c) 2015 FIS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISQueue : NSObject

- (BOOL)isEmpty;
- (void)enqueue:(id)anItem;
- (id)dequeue;
- (NSUInteger)size;
- (id)peek;

@end
