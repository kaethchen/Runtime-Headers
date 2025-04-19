@class NSObject;
@protocol MTRDeviceControllerDelegate, OS_dispatch_queue;

@interface MTRDeviceControllerDelegateInfo : NSObject

@property (readonly, weak, nonatomic) id<MTRDeviceControllerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;

@end
