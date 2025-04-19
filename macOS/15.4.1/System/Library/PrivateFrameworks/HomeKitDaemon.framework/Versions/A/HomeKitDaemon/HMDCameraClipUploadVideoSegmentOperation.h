@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (id)logCategory;
+ (BOOL)shouldRetry;
+ (unsigned long long)cameraClipOperationType;
+ (id)metadataPropertyName;
+ (id)streamingAssetPropertyName;

@end
