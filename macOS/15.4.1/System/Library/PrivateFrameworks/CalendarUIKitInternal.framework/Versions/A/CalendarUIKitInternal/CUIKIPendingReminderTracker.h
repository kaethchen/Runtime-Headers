@class _TtC21CalendarUIKitInternal22PendingReminderTracker;

@interface CUIKIPendingReminderTracker : NSObject {
    _TtC21CalendarUIKitInternal22PendingReminderTracker *_impl;
}

- (void).cxx_destruct;
- (id)impl;
- (id)initWithEventStore:(id)a0;
- (void)addPendingEvent:(id)a0 sequenceNumber:(int)a1;
- (id)optimisticReminderForEvent:(id)a0;
- (void)setOptimisticReminder:(id)a0 forEvent:(id)a1 sequenceNumber:(int)a2;

@end
