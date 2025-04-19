@class NSArray;

@interface TPSDeviceValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetDevices;
@property (readonly, nonatomic) NSArray *excludeDevices;

- (BOOL)_matchesDevices:(id)a0;
- (id)initWithTargetDevices:(id)a0 excludeDevices:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
