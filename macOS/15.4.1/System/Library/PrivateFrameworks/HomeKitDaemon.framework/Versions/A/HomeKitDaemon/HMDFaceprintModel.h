@class NSData, NSUUID, HMBModelReference;

@interface HMDFaceprintModel : HMBModel

@property (copy) NSData *data;
@property (copy) NSUUID *modelUUID;
@property (retain) HMBModelReference *faceCrop;

+ (BOOL)hmbExcludeFromCloudStorage;
+ (id)hmbProperties;

- (id)createFaceprint;
- (id)initWithFaceprint:(id)a0;

@end
