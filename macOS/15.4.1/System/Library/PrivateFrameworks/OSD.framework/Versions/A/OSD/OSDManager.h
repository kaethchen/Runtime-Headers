@class NSXPCConnection;
@protocol OSDUIHelperProtocol;

@interface OSDManager : NSObject <OSDUIHelperProtocol> {
    id<OSDUIHelperProtocol> _proxyObject;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) id<OSDUIHelperProtocol> remoteObjectProxy;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (void)fadeClassicImageOnDisplay:(unsigned int)a0;
- (void)showFullScreenImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecToAnimate:(unsigned int)a3;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 filledChiclets:(unsigned int)a4 totalChiclets:(unsigned int)a5 locked:(BOOL)a6;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 withText:(id)a4;
- (void)showImageAtPath:(id)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 withText:(id)a4;

@end
