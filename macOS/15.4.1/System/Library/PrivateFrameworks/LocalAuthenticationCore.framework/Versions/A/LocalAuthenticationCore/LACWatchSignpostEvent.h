@class LACSignpostEvent;

@interface LACWatchSignpostEvent : LACSignpostEvent

@property (class, readonly, nonatomic) LACSignpostEvent *eligibleDevicesRequestWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *eligibleDevicesRequestDidFinish;

@end
