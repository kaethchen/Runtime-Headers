@class PKMetalResourceHandler, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PKMetalConfig : NSObject {
    BOOL _privateResourceHandler;
}

@property (readonly, nonatomic) PKMetalResourceHandler *resourceHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (readonly, nonatomic) id<MTLDevice> device;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)initWithPrivateResourceHandler:(BOOL)a0;

@end
