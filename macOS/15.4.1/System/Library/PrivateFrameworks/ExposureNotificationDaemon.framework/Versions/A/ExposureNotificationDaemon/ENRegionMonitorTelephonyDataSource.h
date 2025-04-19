@class NSString, ENRegionVisit, NSObject, ENCoreTelephonyUtility;
@protocol OS_dispatch_queue, ENRegionMonitorSourceDelegate;

@interface ENRegionMonitorTelephonyDataSource : NSObject <ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource>

@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (retain, nonatomic) ENCoreTelephonyUtility *telephonyUtility;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)currentRegionVisit;
- (void)mobileCountryCodeChanged:(id)a0 withISOString:(id)a1;
- (void)telephonyUtility:(id)a0 mobileCountryCodeChanged:(id)a1 andCountryCodeISO:(id)a2;

@end
