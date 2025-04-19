@class NSData, NSString, NSObject;
@protocol OS_xpc_object, NCPushRegistrationDelegate;

@interface _NCPushRegistration : NSObject {
    NSString *_identifier;
    NSObject<OS_xpc_object> *_connection;
    BOOL _needsRegistration;
    BOOL _neverReconnect;
}

@property (weak, nonatomic) id<NCPushRegistrationDelegate> delegate;
@property (nonatomic) unsigned long long types;
@property (copy, nonatomic) NSData *token;

- (void).cxx_destruct;
- (id)_endpoint;
- (void)_send_connection_authentication;
- (void)_server_did_come_alive:(id)a0;
- (void)_server_connect;
- (void)_handleIncomingToken:(id)a0;
- (void)_messageRegistrationFailed:(id)a0;
- (void)_messageServerRemotePush:(id)a0;
- (void)_messageServerTokenUpdated:(id)a0;
- (id)_server_connection;
- (id)initWithTypes:(unsigned long long)a0 delegate:(id)a1;
- (void)unregister;

@end
