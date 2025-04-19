@class NSString;

@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAddSignificantEventOperationForClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2;
- (id)createCreateClipOperationForClipModelID:(id)a0 localZone:(id)a1 targetFragmentDuration:(double)a2 clipStartDate:(id)a3 quality:(long long)a4 encryptionManager:(id)a5;
- (id)createCreateClipWithSignificantEventOperationForClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 targetFragmentDuration:(double)a3 clipStartDate:(id)a4 quality:(long long)a5 encryptionManager:(id)a6;
- (id)createFinalizeClipOperationForModelID:(id)a0 localZone:(id)a1;
- (id)createUploadVideoSegmentOperationForModelID:(id)a0 localZone:(id)a1 data:(id)a2 metadata:(id)a3 encryptionManager:(id)a4;

@end
