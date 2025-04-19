@class NSString, NSPointerArray, NSXPCConnection;

@interface NSColorSampler : NSObject <ColorSamplerClientProtocol> {
    NSXPCConnection *_xpcConnection;
    NSPointerArray *_completionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
