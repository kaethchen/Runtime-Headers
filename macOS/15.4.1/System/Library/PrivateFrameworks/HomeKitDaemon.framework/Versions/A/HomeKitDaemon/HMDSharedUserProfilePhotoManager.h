@class HMDCoreDataCloudTransform, NSString;
@protocol HMDSharedUserProfilePhotoManagerDelegate;

@interface HMDSharedUserProfilePhotoManager : HMFObject <HMDCoreDataCloudChangeListener, HMFLogging>

@property (readonly, nonatomic) HMDCoreDataCloudTransform *cloudTransform;
@property (readonly, weak) id<HMDSharedUserProfilePhotoManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
