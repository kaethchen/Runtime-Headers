@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VirtualDisplayClient : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_terminationHandlerQueue;
    id /* block */ _terminationHandler;
    void *_arg;
    unsigned int _serverRPC_port;
    unsigned int _proxyRPC_port;
    unsigned int _clientHandler_port;
    unsigned int _vendorID;
    unsigned int _productID;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int displayID;

- (void)dealloc;
- (BOOL)applySettings:(id)a0;
- (id)initWithOptions:(id)a0 queue:(id)a1 terminationHandler:(id /* block */)a2 context:(void *)a3;
- (id)initWithVendorID:(unsigned int)a0 productID:(unsigned int)a1 serialNum:(unsigned int)a2 name:(id)a3 sizeInMillimeters:(struct CGSize { double x0; double x1; })a4 maxPixelsWide:(unsigned int)a5 maxPixelsHigh:(unsigned int)a6 redPrimary:(struct CGPoint { double x0; double x1; })a7 greenPrimary:(struct CGPoint { double x0; double x1; })a8 bluePrimary:(struct CGPoint { double x0; double x1; })a9 whitePoint:(struct CGPoint { double x0; double x1; })a10 queue:(id)a11 terminationHandler:(id /* block */)a12 arg:(void *)a13;
- (BOOL)pluginWithOptions:(id)a0;
- (int)proxyGone;
- (void)unplug;

@end
