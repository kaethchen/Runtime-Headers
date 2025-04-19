@class HMCameraClipEncryptionManager, NSDate;

@interface HMDCameraClipCreateClipWithSignificantEventOperation : HMDCameraClipAddSignificantEventOperation

@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSDate *clipStartDate;
@property (readonly) long long quality;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;

+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 targetFragmentDuration:(double)a3 clipStartDate:(id)a4 quality:(long long)a5 encryptionManager:(id)a6;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 targetFragmentDuration:(double)a3 clipStartDate:(id)a4 quality:(long long)a5 encryptionManager:(id)a6 dataSource:(id)a7;
- (id)modelsToAdd;

@end
