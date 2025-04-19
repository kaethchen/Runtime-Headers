@class NSString, NSObject;
@protocol _RWIRelayConnectionToApplicationDelegate, OS_xpc_object;

@interface _RWIRelayConnectionToApplication : NSObject

@property (weak, nonatomic) id<_RWIRelayConnectionToApplicationDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL available;
@property (copy, nonatomic) NSString *tag;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)initWithConnection:(id)a0;
- (void)_handleEvent:(id)a0;
- (BOOL)available;
- (id)_deserializeMessage:(id)a0;
- (void)sendMessage:(id)a0 userInfo:(id)a1;

@end
