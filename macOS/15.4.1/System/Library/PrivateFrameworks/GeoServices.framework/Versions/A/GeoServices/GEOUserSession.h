@class NSMutableDictionary, NSDictionary, NSData, GEOUserSessionEntity, GEOAPSessionData, NSObject;
@protocol OS_dispatch_queue;

@interface GEOUserSession : NSObject {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _shortSessionID;
    double _shortSessionStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _shortNavSessionLock;
    BOOL _shortNavSessionNeedsInit;
    int _shortSessionChangedToken;
    NSDictionary *_shortSessionByAppID;
    id _shortSessionListener;
    NSData *_navigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navigationSessionID;
    double _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _previousNavigationSessionID;
    double _previousNavigationSessionStartTime;
    double _previousNavigationSessionEndTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _longSessionLock;
    NSMutableDictionary *_longSessionByAppID;
    BOOL _longSessionNeedsInit;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fifteenMoDeviceSessionLock;
    GEOAPSessionData *_fifteenMoDeviceSessionData;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _zeroSessionID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, nonatomic) BOOL initialShareSessionWithMaps;

@property (readonly, nonatomic, getter=_sharedSessionDataByAppId) NSDictionary *sharedSessionData;
@property (nonatomic) BOOL shareSessionWithMaps;
@property (copy, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity;
@property (copy, nonatomic) GEOUserSessionEntity *mapsShortSession;
@property (readonly, nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionID;

+ (id)sharedInstance;
+ (struct GEOSessionID { unsigned long long x0; unsigned long long x1; })_newSessionId;
+ (id)highBytesStringFromSession:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0;
+ (id)lowBytesStringFromSession:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0;
+ (id)mapsUnifiedBundleId;

- (id)init;
- (void).cxx_destruct;
- (id)longSessionAppIdForActualAppId:(id)a0;
- (void)terminateNavigationWithRouteID:(id)a0;
- (void)_generateNewNavSessionIDAtTime:(double)a0;
- (id)_updateSharedSessionDataByAppId;
- (void)_accessLongSessionValuesInBlock:(id /* block */)a0;
- (double)_currentTime;
- (void)_currentTimeResult:(id /* block */)a0;
- (id)_get15moDeviceRawSessionData;
- (unsigned long long)_get15moDeviceSessionConfiguredEpoch;
- (id)_get15moDeviceSessionData;
- (id)_getPersistedLongSessionData;
- (id)_getPersistedNavSessionData;
- (void)_initializeLongSessionData;
- (void)_initializeShortAndNavData;
- (void)_mapsShortSessionValues:(id /* block */)a0;
- (id)_mapsUserSessionEntity;
- (void)_processMapsAppDeletion;
- (void)_resetShortSessionID;
- (void)_saveSharedSessionDataByAppId:(id)a0;
- (void)_set15moDeviceSessionData:(id)a0;
- (void)_setPersistedLongSessionData:(id)a0;
- (void)_setPersistedNavSessionData:(id)a0;
- (void)_setShortSessionId:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0 sessionCreateTime:(double)a1;
- (void)_shortSessionValues:(id /* block */)a0;
- (BOOL)_updateNavSessionIDAtTime:(double)a0;
- (void)endNavigationSession;
- (void)fifteenMonthDeviceSessionValues:(id /* block */)a0;
- (void)longSessionValuesForAppId:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)mapsSessionEntityWithCallback:(id /* block */)a0 shareSessionIDWithMaps:(BOOL)a1 resetSession:(BOOL)a2;
- (void)pauseNavigationWithRouteID:(id)a0;
- (void)resetLongSessionValuesForAppId:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)resumeNavigationWithRouteID:(id)a0;
- (void)setSharedMapsUserSessionEntity:(id)a0 shareSessionIDWithMaps:(BOOL)a1;
- (void)shortAndNavSessionValues:(id /* block */)a0;
- (void)shortSessionValues:(id /* block */)a0;
- (BOOL)shouldSuppressSession;
- (void)startNavigationSessionWithDirectionsID:(id)a0 originalDirectionsID:(id)a1;
- (void)startNavigationWithRouteID:(id)a0 isEVRoute:(BOOL)a1;

@end
