@class NSString;

@interface HMDCarPlayDataSource : HMFObject <HMFLogging, HMDCarPlayDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)synchronouslyFetchIsCarPlayConnectedStatus;
- (BOOL)synchronouslyFetchIsConnectedToCarPlayNetwork;

@end
