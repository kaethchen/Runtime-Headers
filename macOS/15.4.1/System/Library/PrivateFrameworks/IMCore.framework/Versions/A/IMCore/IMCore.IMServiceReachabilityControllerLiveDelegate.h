@class NSArray;

@interface IMCore.IMServiceReachabilityControllerLiveDelegate : _TtCs12_SwiftObject <IMServiceReachabilityControllerDelegate>

@property (nonatomic, readonly) NSArray *serviceNamesForSending;
@property (nonatomic, readonly) long long taskDeadlineSeconds;

- (void)calculateReachabilityWithRequest:(id)a0 responseHandler:(id)a1;
- (long long)sortOrderForServiceName:(id)a0;
- (id)preconditionsForServiceName:(id)a0;
- (id)preferredAccountIDForServiceName:(id)a0;

@end
