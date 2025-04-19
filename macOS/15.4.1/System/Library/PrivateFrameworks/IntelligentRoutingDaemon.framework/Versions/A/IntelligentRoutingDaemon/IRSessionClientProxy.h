@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IRSessionClientProxy : NSObject <IRXPCSessionClient>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidateXPCConnection;
- (void)_didSpotOnLocationComplete:(id)a0;
- (void)_didUpdateBundlesWithSignificantInteractionPattern:(id)a0;
- (void)_didUpdateContext:(id)a0;
- (void)_sessionDidFailWithError:(id)a0;

@end
