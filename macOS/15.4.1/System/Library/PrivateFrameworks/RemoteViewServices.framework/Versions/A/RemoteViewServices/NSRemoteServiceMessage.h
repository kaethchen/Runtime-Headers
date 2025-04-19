@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object;

@interface NSRemoteServiceMessage : NSObject {
    unsigned long long _messageType;
    NSMutableDictionary *_arguments;
    NSObject<OS_xpc_object> *_endpoints;
    NSObject<OS_xpc_object> *_ports;
}

@property (readonly) NSObject<OS_xpc_object> *message;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)argumentForKey:(id)a0;
- (id)_archiveArguments:(id)a0;
- (id)_unarchiveArguments:(id)a0;
- (id)copyConnectionForKey:(id)a0;
- (unsigned int)portForKey:(id)a0;
- (id)serializedMessage;
- (void)setArgument:(id)a0 forKey:(id)a1;
- (void)setConnection:(id)a0 forKey:(id)a1;
- (void)setPort:(unsigned int)a0 rightType:(unsigned long long)a1 forKey:(id)a2;

@end
