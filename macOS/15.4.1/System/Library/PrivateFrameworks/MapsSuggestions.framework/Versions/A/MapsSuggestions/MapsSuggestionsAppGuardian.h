@class NSString, NSMapTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsAppProtectionConnector;

@interface MapsSuggestionsAppGuardian : NSObject <MapsSuggestionsAppProtectionStatusMonitoring, MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_sources;
    NSMutableSet *_appStatusTrackers;
    NSString *uniqueName;
    id<MapsSuggestionsAppProtectionConnector> _connector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

+ (long long)protectionStatusForBundleID:(id)a0;

- (void).cxx_destruct;
- (void)_remove:(id)a0 source:(id)a1;
- (void)_add:(id)a0 source:(id)a1;
- (void)_removeAllBundleIDsForSource:(id)a0;
- (void)appProtectionStatusChanged:(id)a0;
- (id)initFromResourceDepot:(id)a0;
- (BOOL)isBundleIDLocked:(id)a0 forSource:(id)a1;
- (void)registerAppTracker:(id)a0;
- (void)registerBundleID:(id)a0 withSource:(id)a1;
- (void)unregisterAllBundleIDsForSource:(id)a0;
- (void)unregisterAppTracker:(id)a0;
- (void)unregisterBundleID:(id)a0 withSource:(id)a1;

@end
