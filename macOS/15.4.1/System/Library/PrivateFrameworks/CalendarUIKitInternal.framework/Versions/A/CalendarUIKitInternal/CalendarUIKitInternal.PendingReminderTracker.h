@interface CalendarUIKitInternal.PendingReminderTracker : NSObject {
    void /* unknown type, empty encoding */ eventStore;
    void /* unknown type, empty encoding */ trackedEvents;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0;
- (void)addPendingWithEvent:(id)a0 sequenceNumber:(int)a1;
- (void)eventStoreDidChange:(id)a0;
- (id)optimisticReminderFor:(id)a0;
- (void)revertPendingWithEvent:(id)a0 sendNotification:(BOOL)a1;
- (void)setOptimisticReminderWithEvent:(id)a0 sequenceNumber:(int)a1 optimisticReminder:(id)a2;

@end
