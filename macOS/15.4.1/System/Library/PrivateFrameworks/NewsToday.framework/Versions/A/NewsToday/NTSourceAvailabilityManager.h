@class NSOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTSourceAvailabilityManager : NSObject

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder;
@property (nonatomic) Class preferredSourceFetchDescriptorClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ preferredSourceChangedNotificationBlock;

- (id)init;
- (void).cxx_destruct;
- (void)_recomputePreferredAvailableTodayResultsSource;
- (void)_setPreferredAvailableTodayResultsSource:(Class)a0;
- (id)initWithAvailabilityEntriesInPreferredOrder:(id)a0 queue:(id)a1;

@end
