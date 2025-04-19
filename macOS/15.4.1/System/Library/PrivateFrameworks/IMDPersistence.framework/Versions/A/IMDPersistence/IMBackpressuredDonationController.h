@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMBackpressuredDonationController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ donationBlock;
@property (nonatomic) BOOL donationInProgress;
@property (retain, nonatomic) NSMutableArray *pendingDonations;
@property (readonly, nonatomic) long long donationCount;
@property (readonly, nonatomic) long long maxBackpressureSize;

- (void).cxx_destruct;
- (void)_beganDonatingItems;
- (void)_deferItems:(id)a0;
- (void)_donateItems:(id)a0;
- (void)_finishedDonatingItems:(id)a0;
- (id)_popDonationsUpToCount:(long long)a0;
- (void)donateItems:(id)a0;
- (id)initWithDonationCount:(long long)a0 maxBackpressureSize:(long long)a1 donationBlock:(id /* block */)a2;

@end
