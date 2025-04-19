@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PXGMetalRenderStatePool : NSObject {
    NSMutableArray *_reusableRenderStates;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<MTLDevice> device;

- (void).cxx_destruct;
- (void)_checkinRenderState:(id)a0;
- (id)checkoutRenderState;
- (void)clearReusePool;
- (id)initWithDevice:(id)a0 queue:(id)a1;

@end
