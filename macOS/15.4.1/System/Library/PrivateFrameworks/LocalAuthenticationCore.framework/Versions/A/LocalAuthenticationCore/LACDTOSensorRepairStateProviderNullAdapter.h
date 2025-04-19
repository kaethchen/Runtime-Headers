@class NSString;

@interface LACDTOSensorRepairStateProviderNullAdapter : NSObject <LACDTOSensorRepairStateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRepairStateWithCompletion:(id /* block */)a0;

@end
