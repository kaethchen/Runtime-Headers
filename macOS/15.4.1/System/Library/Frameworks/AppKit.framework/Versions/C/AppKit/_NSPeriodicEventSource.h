@interface _NSPeriodicEventSource : NSObject {
    double delay;
    double period;
    struct __CFRunLoopTimer { } *timer;
    unsigned long long errorData;
}

- (void)addTimerToModes;

@end
