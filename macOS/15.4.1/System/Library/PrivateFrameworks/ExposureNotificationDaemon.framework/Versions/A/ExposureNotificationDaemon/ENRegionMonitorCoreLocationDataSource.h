@class RTRoutineManager, NSString, CLLocationManager, ENRegionVisit, NSObject;
@protocol OS_dispatch_queue, ENRegionMonitorSourceDelegate;

@interface ENRegionMonitorCoreLocationDataSource : NSObject <ENRegionMonitorDataSource, CLLocationManagerDelegate>

@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startMonitoring;
- (void)_setup;
- (void)stopMonitoring;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)setup;
- (void)_processLocation:(id)a0;
- (void)_processLocation:(id)a0 locationOfInterest:(id)a1;
- (void)_processLocation:(id)a0 locationsOfInterest:(id)a1;
- (void)_processVisit:(id)a0;
- (void)_updateRegionVisit:(id)a0;
- (void)_updatedRegion;
- (id)currentRegionVisit;
- (id)initWithDelegate:(id)a0 routineManager:(id)a1;
- (void)processLocation:(id)a0 locationOfInterest:(id)a1;
- (void)processLocation:(id)a0 locationsOfInterest:(id)a1;
- (void)updateRegion;
- (BOOL)updateRegionAllowed;
- (void)updateRegionVisit:(id)a0;

@end
