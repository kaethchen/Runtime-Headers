@class NetworkStateRelay, NSArray, NSMutableDictionary, TrackerPolicy, NSDate, LightweightTimer;
@protocol flowDispositionObserver;

@interface InterfaceTypeTracker : NSObject

@property (retain) NSArray *alwaysNote;
@property (retain) NSArray *neverNote;
@property (retain) NSArray *daemonCheck;
@property (retain) NSMutableDictionary *trackerCache;
@property unsigned char functionalInterfaceType;
@property (retain) id<flowDispositionObserver> observer;
@property (retain) TrackerPolicy *defaultPolicy;
@property (retain) NetworkStateRelay *stateRelay;
@property (retain) NSDate *madePrimaryDate;
@property (retain) LightweightTimer *lwTimer;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithInterfaceType:(unsigned char)a0;
- (void)_dumpState;
- (id)infoDir;
- (void)removeLinkages:(id)a0;
- (void)_trackerCachePrune;
- (void)configurePolicies:(id)a0;
- (void)getNetworkActivity:(id /* block */)a0;
- (void)noteFlow:(id)a0 withDelegatee:(id)a1 snapshot:(id)a2;
- (void)noteFlow:(id)a0 withOwner:(id)a1 snapshot:(id)a2;
- (void)noteFlowClassificationExpiry:(id)a0;
- (unsigned long long)scheduleExpiryCheckFor:(unsigned long long)a0 delay:(double)a1;
- (void)setupLightweightTimer;

@end
