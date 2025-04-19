@class NSXPCInterface, NSString, Protocol;
@protocol FAXPCListenerProtocol;

@interface FAXPCDelegate : NSObject <NSXPCListenerDelegate>

@property (retain) id<FAXPCListenerProtocol> exportedObject;
@property (retain) Protocol *exportedProtocol;
@property (retain) NSXPCInterface *exportedInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithExportedObject:(id)a0 exportedProtocol:(id)a1;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
