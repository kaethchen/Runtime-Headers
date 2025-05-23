@class NSObject;
@protocol OS_xpc_object, BSXPCServiceConnectionMessage;

@interface FBSXPCMessage : NSObject {
    id<BSXPCServiceConnectionMessage> _reply;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload;

+ (id)message;
+ (id)messageWithPacker:(id /* block */)a0;
+ (id)messageWithPayload:(id)a0;
+ (id)messageWithBSXPCMessage:(id)a0 ownReply:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessagePacker:(id /* block */)a0;
- (id)initWithMessagePayload:(id)a0;
- (void)sendReplyMessageWithPacker:(id /* block */)a0;

@end
