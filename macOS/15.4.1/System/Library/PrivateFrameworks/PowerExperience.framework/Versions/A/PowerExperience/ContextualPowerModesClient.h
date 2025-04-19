@class NSString, NSXPCConnection, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ContextualPowerModesClient : NSObject <_ContextualPowerModesCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSSet *interestedModes;
@property BOOL connectionInterrupted;

- (id)init;
- (void).cxx_destruct;
- (void)reRegister;
- (void)registerWithIdentifier:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (void)registerWithIdentitifer:(id)a0 forModes:(id)a1 queue:(id)a2 callback:(id /* block */)a3;
- (void)updateState:(BOOL)a0 forMode:(id)a1;

@end
