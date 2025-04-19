@class RBSXPCMessageContext, RBSXPCCoder;

@interface RBSXPCMessageReply : NSObject {
    RBSXPCMessageContext *_context;
    BOOL _sent;
}

@property (readonly, nonatomic) RBSXPCCoder *payload;

- (void).cxx_destruct;
- (void)prepareForHandoff;
- (void)send;

@end
