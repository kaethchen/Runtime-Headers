@class LACSignpostEvent;

@interface LACOnenessSignpostEvent : LACSignpostEvent

@property (class, readonly, nonatomic) LACSignpostEvent *authenticationRequestWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *authenticationRequestDidFinish;
@property (class, readonly, nonatomic) LACSignpostEvent *eligibleDevicesRequestWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *eligibleDevicesRequestDidFinish;

@end
