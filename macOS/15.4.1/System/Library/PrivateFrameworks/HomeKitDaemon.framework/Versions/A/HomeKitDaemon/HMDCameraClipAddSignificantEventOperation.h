@class HMDCameraRecordingSessionSignificantEvent, NSString;

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipAddModelsOperation <HMBLocalZoneMirrorOutputObserver>

@property (readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 dataSource:(id)a3;
- (id)modelsToAdd;
- (void)updateMirrorOutputModel:(id)a0;

@end
