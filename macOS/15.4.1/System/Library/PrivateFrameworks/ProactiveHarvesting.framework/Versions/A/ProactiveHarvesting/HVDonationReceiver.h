@class HVQueues, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface HVDonationReceiver : NSObject {
    HVQueues *_queues;
    NSObject<OS_dispatch_queue> *_biomeSubQueue;
    BMBiomeScheduler *_biomeScheduler;
    BPSSink *_biomeSink;
}

+ (id)defaultReceiver;

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (BOOL)donateInteractions:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)donateSearchableItems:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)donateUserAction:(id)a0 searchableItem:(id)a1 error:(id *)a2;
- (id)initWithQueues:(id)a0;
- (void)_setUpUserActivityDonations;

@end
