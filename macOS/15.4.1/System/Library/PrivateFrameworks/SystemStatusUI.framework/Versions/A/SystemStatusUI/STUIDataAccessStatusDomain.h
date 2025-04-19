@class STUIDataAccessStatusDomainData, STMediaStatusDomain, STLocationStatusDomain, NSSet, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface STUIDataAccessStatusDomain : STStatusDomain {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<BSInvalidatable> _stateCaptureHandle;
    STLocationStatusDomain *_locationDomain;
    STMediaStatusDomain *_mediaDomain;
    STUIDataAccessStatusDomainData *_currentData;
    NSSet *_activeAttributions;
    NSMutableArray *_attributionsWaitingForMinimumDisplayTime;
    NSMutableDictionary *_activeAttributionMinimumDisplayTimers;
    NSMutableArray *_attributionsWaitingForLingerTime;
    NSMutableDictionary *_activeAttributionLingerTimers;
    NSMutableArray *_recentAttributions;
    NSMutableDictionary *_recentAttributionExpirationTimers;
}

+ (unsigned long long)statusDomainName;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (void)invalidate;
- (id)initWithServerHandle:(id)a0;

@end
