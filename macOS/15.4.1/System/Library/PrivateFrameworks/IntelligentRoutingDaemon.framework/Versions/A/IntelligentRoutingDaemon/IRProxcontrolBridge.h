@class NSString, NSObject;
@protocol OS_dispatch_queue, IRProximityBridgeDelegateProtocol;

@interface IRProxcontrolBridge : NSObject <IRProximityBridgeProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRProximityBridgeDelegateProtocol> delegate;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)_createProxControlObserver;
- (void)_runProxControlObserver;

@end
