@class DNDSExplicitRegionStore, NSArray, NSString, NSMutableSet, DNDSLocationTriggerConfiguration;
@protocol DNDSBackingStore, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSAggregateLocationLifetimeMonitor;

@interface DNDSExplicitRegionLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate, DNDSLocationSysdiagnoseContributor> {
    DNDSLocationTriggerConfiguration *_currentConfiguration;
    NSMutableSet *_enteredRegionIdentifiers;
    NSMutableSet *_enteredRegionIdentifiersPendingExit;
    DNDSExplicitRegionStore *_store;
    id<DNDSBackingStore> _backingStore;
}

@property (weak, nonatomic) id<DNDSAggregateLocationLifetimeMonitor> aggregateMonitor;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (id)_queue_locationMonitorClientIdentifierForModeIdentifier:(id)a0 region:(id)a1;
- (void)_queue_stopMonitoringForRegion:(id)a0;
- (void)_loadDataFromBackingStore;
- (void)_queue_invalidateAssertionOnExitFromRegion:(id)a0;
- (void)_queue_refreshMonitor;
- (void)_queue_resolveEnteredRegionIdentifiersWithAssertionRegionIdentifiers:(id)a0;
- (void)_queue_startMonitoringForRegion:(id)a0;
- (void)_queue_takeAssertionOnEntryIntoRegion:(id)a0;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;
- (void)_updateWithCachedStateForRegions:(id)a0;
- (id)initWithAggregateMonitor:(id)a0;
- (void)refreshMonitorForDate:(id)a0;
- (id)sysdiagnoseDataRedacted:(BOOL)a0;

@end
