@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (id)sharedState;
+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_fetchMapsAppInstallState;
- (BOOL)_isMapsAppInstalled;
- (void)receivedChangeNotification:(id)a0;
- (void)registerMapsInstallStateObserver:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;

@end
