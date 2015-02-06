//
//  FISQueue.m
//  Queue-sadilla
//
//  Created by Chris Gonzales on 2/6/15.
//  Copyright (c) 2015 FIS. All rights reserved.
//

#import "FISQueue.h"

@interface FISQueue ()
@property (nonatomic) NSMutableArray *queue;
@end

@implementation FISQueue

- (instancetype)init {
    if (self = [super init]) {
        _queue = [[NSMutableArray alloc] init];
    }
    return self;
}

- (BOOL)isEmpty {
    return self.queue.count == 0;
}

- (void)enqueue:(id)anItem {
    if (anItem) {
        [self.queue addObject:anItem];
    }
}

- (id)dequeue {
    if (self.queue.count) {
        id firstObject = [self.queue objectAtIndex:0];
        [self.queue removeObjectAtIndex:0];
        return firstObject;
    }
    return nil;
}
- (NSUInteger)size {
    return self.queue.count;
}

- (id)peek {
    return [self.queue firstObject];
}

@end
