@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererTileController : NSObject {
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
    NSMutableDictionary *_tileMultiplyFramebuffers;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)_framebufferForTile:(id)a0 createIfNeeded:(BOOL)a1 device:(id)a2 pixelFormat:(unsigned long long)a3 tileFramebuffersDictionary:(id)a4 clearColor:(struct { double x0; double x1; double x2; double x3; })a5 clearFramebufferBlock:(id /* block */)a6;
- (void)didTeardownTile:(id)a0;
- (id)framebufferForTile:(id)a0 createIfNeeded:(BOOL)a1 device:(id)a2 pixelFormat:(unsigned long long)a3 clearFramebufferBlock:(id /* block */)a4;
- (id)multiplyFramebufferForTile:(id)a0 createIfNeeded:(BOOL)a1 device:(id)a2 pixelFormat:(unsigned long long)a3 clearFramebufferBlock:(id /* block */)a4;

@end
