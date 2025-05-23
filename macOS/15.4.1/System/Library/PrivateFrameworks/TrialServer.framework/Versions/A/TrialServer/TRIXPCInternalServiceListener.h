@class NSString, NSXPCInterface, TRIXPCServerContextPromise;

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate> {
    TRIXPCServerContextPromise *_promise;
    NSXPCInterface *_interface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContextPromise:(id)a0;

@end
