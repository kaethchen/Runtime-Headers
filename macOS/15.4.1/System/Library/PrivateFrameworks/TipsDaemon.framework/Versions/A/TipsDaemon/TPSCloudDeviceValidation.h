@class NSArray, TPSCloudDeviceInfo;
@protocol TPSCloudDeviceDataSource;

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (class, readonly, copy, nonatomic) NSArray *idsDevices;

@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo;
@property (weak, nonatomic) id<TPSCloudDeviceDataSource> dataSource;

+ (id)idsService;
+ (id)watchDeviceInfoUsingDataSource:(id)a0;
+ (id)deviceInfoForIdentifier:(id)a0 preferredModels:(id)a1 dataSource:(id)a2;
+ (id)iPadDeviceInfoUsingDataSource:(id)a0;
+ (id)iPhoneDeviceInfoUsingDataSource:(id)a0;
+ (id)normalizedVersion:(id)a0;
+ (id)tvDeviceInfoUsingDataSource:(id)a0;
+ (id)visionProDeviceInfoUsingDataSource:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
