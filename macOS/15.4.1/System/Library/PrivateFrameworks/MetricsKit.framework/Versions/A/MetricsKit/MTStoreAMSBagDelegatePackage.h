@class NSString, MTConvenienceEnvironmentDelegate, MTConfigAMSMetricsDelegate, MTEventRecorderAMSMetricsDelegate;

@interface MTStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>

@property (copy) id /* block */ hostAppBlock;
@property (retain) MTConfigAMSMetricsDelegate *configDelegate;
@property (retain) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate;
@property (retain) MTConvenienceEnvironmentDelegate *environmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
