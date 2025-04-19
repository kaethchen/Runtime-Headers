@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (void)clearPool;

@end
