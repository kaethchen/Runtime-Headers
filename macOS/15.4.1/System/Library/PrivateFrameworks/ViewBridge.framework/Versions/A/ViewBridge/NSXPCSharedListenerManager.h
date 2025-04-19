@interface NSXPCSharedListenerManager : NSObject <NSXPCSharedListenerManager>

- (void)builtForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
- (void)getProgramSDKVersion:(id /* block */)a0;
- (void)warmUpClassNamed:(id)a0 withReply:(id /* block */)a1;

@end
