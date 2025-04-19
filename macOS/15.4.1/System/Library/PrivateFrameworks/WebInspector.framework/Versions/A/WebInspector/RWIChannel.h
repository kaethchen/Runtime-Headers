@class NSString, RWIDebuggable, RWIManager;
@protocol RWIChannelDelegate;

@interface RWIChannel : NSObject <RWIDebugger>

@property (weak, nonatomic) id<RWIChannelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) RWIDebuggable *debuggable;
@property (readonly, nonatomic) RWIManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)start;
- (void)sendMessageToBackend:(id)a0;
- (void)sendMessageToFrontend:(id)a0;
- (id)initWithManager:(id)a0 debuggable:(id)a1;

@end
