@class NSArray, NSDictionary, NSObject, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager, AMSMutablePromise;
@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSMutablePromise *_currentInvestigation;
}

@property (class, readonly) AMSNetworkQualityInquiry *sharedInstance;
@property (class, readonly) NSDictionary *lastConnectionReport;

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (BOOL)isEntitled;
+ (id)reportForTaskTimingData:(id)a0 fromReports:(id)a1;
+ (void)updateLastConnectionReportWithTask:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)drainKnownNetworksReadyHandlers;
- (BOOL)areKnownNetworksReady;
- (void)didStartTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)didStopTrackingNOI:(id)a0;
- (id)investigateNetworks;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;

@end
