@class NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface PTCommandQueueProxy : NSObject <MTLCommandQueue> {
    id<MTLCommandQueue> _commandQueue;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInitializerCommandQueue:(id)a0;
- (void)switchToCommandQueue:(id)a0;

@end
