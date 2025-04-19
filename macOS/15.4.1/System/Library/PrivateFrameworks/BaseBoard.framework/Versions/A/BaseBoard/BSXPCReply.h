@class NSObject;
@protocol OS_xpc_object;

@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}

+ (id)messageWithReply:(id)a0;
+ (id)replyForMessage:(id)a0;

- (void).cxx_destruct;
- (id)message;
- (id)initForMessage:(id)a0;
- (id)initWithReply:(id)a0;
- (long long)messageKind;
- (void)sendReply:(id /* block */)a0;

@end
