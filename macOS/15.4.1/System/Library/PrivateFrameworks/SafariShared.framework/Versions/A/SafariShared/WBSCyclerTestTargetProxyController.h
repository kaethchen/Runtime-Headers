@class NSXPCConnection;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerTestTargetProxyController : NSObject {
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ disconnectionHandler;
@property (readonly, nonatomic) id<WBSCyclerTestTarget> testTargetProxy;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;

@end
