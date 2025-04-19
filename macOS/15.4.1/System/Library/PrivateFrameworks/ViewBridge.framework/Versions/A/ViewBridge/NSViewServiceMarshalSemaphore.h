@interface NSViewServiceMarshalSemaphore : NSCFRunLoopSemaphore {
    int _processIdentifier;
}

- (BOOL)wait:(double)a0;
- (id)initWithProcessIdentifier:(int)a0;

@end
