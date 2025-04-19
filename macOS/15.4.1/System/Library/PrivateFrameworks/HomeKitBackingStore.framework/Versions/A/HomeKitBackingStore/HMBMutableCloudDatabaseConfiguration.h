@class NSString, NSObject, CKOperationConfiguration;
@protocol OS_dispatch_queue;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property long long subscriptionPushRegistrationAction;
@property (retain) NSObject<OS_dispatch_queue> *operationQueue;

@end
