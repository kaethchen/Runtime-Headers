@class NSString, NSXPCListenerEndpoint;

@interface NSDeferredSheet : NSObject

@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSString *childIdentifier;
@property (retain) NSString *parentIdentifier;
@property (copy) id /* block */ reply;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) BOOL isCritical;
@property (readonly) unsigned char windowBase;

- (void)dealloc;
- (id)initWithChildIdentifier:(id)a0 parentIdentifier:(id)a1 windowBase:(unsigned char)a2 size:(struct CGSize { double x0; double x1; })a3 isCritical:(BOOL)a4 listenerEndpoint:(id)a5 withReply:(id /* block */)a6;

@end
