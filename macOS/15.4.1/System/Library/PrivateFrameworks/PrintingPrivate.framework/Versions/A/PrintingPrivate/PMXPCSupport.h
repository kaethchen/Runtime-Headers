@class NSObject;
@protocol OS_xpc_object, PMXPCSupportDelegate;

@interface PMXPCSupport : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property id<PMXPCSupportDelegate> delegate;

+ (id)xpcSupportFor:(id)a0 delegate:(id)a1;

- (void)dealloc;
- (void)cancel;
- (void)handleXPCEvent:(id)a0;
- (id)initXPCSupportFor:(id)a0 delegate:(id)a1;
- (int)sendCommandSync:(int)a0 args:(id)a1 reply:(const void **)a2;
- (int)sendCommandSync:(int)a0 timeout:(long long)a1 args:(id)a2 reply:(const void **)a3;
- (int)setAuthDataForCommand:(int)a0 message:(id)a1;

@end
