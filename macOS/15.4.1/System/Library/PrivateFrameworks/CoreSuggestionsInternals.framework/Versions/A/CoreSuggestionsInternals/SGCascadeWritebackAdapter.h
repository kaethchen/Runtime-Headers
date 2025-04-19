@class NSString;

@interface SGCascadeWritebackAdapter : NSObject <SGJournalCalendarObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loggingIdentifiersFromEvents:(id)a0;

- (void)addEvent:(id)a0;
- (void)addEvents:(id)a0;
- (void)calendarDeleted;
- (id)_cascadeEntityItemsFromEvents:(id)a0;
- (void)cancelEvent:(id)a0;
- (void)cancelEvents:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (void)orphanEvent:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;

@end
