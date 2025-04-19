@class NSUUID, _HMContext, NSString;

@interface HMCameraClipsQuotaMessenger : HMFObject <HMFLogging>

@property (class, readonly, copy) NSUUID *UUID;

@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
