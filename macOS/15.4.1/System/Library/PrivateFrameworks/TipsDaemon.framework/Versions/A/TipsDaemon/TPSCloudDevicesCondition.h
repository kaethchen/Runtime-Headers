@class NSArray, NSString;

@interface TPSCloudDevicesCondition : TPSCondition <TPSCloudDeviceDataSource>

@property (copy, nonatomic) NSArray *registeredDevices;
@property (copy, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_valuesFromValuesArray:(id)a0;
- (id)targetingValidations;
- (void)validateWithCompletion:(id /* block */)a0;

@end
