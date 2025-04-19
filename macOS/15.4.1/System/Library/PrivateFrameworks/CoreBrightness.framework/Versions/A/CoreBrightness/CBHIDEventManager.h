@class NSMutableDictionary, AABCHistograms, HIDEventSystemClient, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBHIDEventManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_internalALSFilterHistory;
    unsigned long long _internalALSFilterHistorySize;
    NSMutableArray *_hidServiceClients;
    HIDEventSystemClient *_hidSystemClient;
    NSMutableArray *_clients;
    NSMutableDictionary *_lastReportedALSEvents;
    float _luxAbsoluteSensitivity;
    float _luxSensitivity;
    float _colorSensitivity;
    NSMutableArray *_filters;
    BOOL _displayOn;
    AABCHistograms *_analyticsIlluminanceHist;
    long long _analyticsPeriodicSender;
}

@property (nonatomic) BOOL filtersSuspended;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 identifier:(id)a1;
- (void)hidEventCallbackWithEvent:(id)a0 from:(id)a1;
- (void)addFilters:(id)a0;
- (void)addHIDService:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)crossedAbsoluteLuxThreshold:(id)a0 compareWith:(id)a1;
- (BOOL)crossedRelativeColorThreshold:(id)a0 compareWith:(id)a1;
- (BOOL)crossedRelativeLuxThreshold:(id)a0 compareWith:(id)a1;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)forceDispatchEvents;
- (BOOL)initialiseHidEventSystemClient;
- (BOOL)powerStatePropertyHandler:(id)a0;
- (void)removeFilters;
- (void)removeHIDService:(id)a0;
- (BOOL)setALSReportInterval:(BOOL)a0;
- (BOOL)setALSReportIntervalForService:(id)a0 displayState:(BOOL)a1;
- (void)setMedianFilterSize:(unsigned long long)a0;
- (void)updateInternalMedianFilter:(id)a0;

@end
