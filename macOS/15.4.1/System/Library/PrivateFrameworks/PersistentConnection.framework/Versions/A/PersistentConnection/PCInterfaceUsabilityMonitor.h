@class NSRecursiveLock, NSString, CUTWeakReference, NSObject, NSMutableArray;
@protocol OS_nw_path_evaluator, OS_nw_parameters, OS_nw_interface, OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_scQueue;
    long long _interfaceIdentifier;
    CUTWeakReference *_delegateReference;
    NSObject<OS_nw_parameters> *_pathParameters;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_interface> *_lastInterface;
    NSObject<OS_nw_interface> *_lastDelegateInterface;
    BOOL _isPathSatisfied;
    long long _interfaceConstraint;
    void *_dynamicStore;
    struct __CFString { } *_lqKey;
    int _linkQuality;
    BOOL _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
    NSRecursiveLock *_recursiveLock;
}

@property (readonly, nonatomic) BOOL isRadioHot;
@property (nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) long long interfaceConstraint;
@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBadLinkQuality:(int)a0;
+ (BOOL)isPoorLinkQuality:(int)a0;
+ (id)stringForLinkQuality:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;
- (void)_callDelegateWithBlock:(id /* block */)a0;
- (BOOL)_createLinkQualityMonitor:(BOOL)a0;
- (void)_createPathEvaluator;
- (void)_dynamicStoreCallback:(id)a0;
- (void)_dynamicStoreCallbackForKeys:(id)a0;
- (void)_flushStaleTransitions;
- (BOOL)_isInterfaceHistoricallyUsable;
- (BOOL)_isInterfaceUsable;
- (void)_pathUpdate:(id)a0;
- (void)_processLinkQualityUpdateWithChangedKey:(id)a0 updatedLinkQuality:(int)a1;
- (void)_unscheduleLinkQualityMonitor;
- (void)_unschedulePathEvaluator;
- (void)_updateOffTransitionsForLinkQualityChange;
- (void)_updatePathParameters;
- (id)currentInterfaceName;
- (id)initWithInterfaceIdentifier:(long long)a0 delegateQueue:(id)a1;
- (void)setTrackUsability:(BOOL)a0;
- (void)setTrackedTimeInterval:(double)a0;

@end
