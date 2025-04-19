@interface SKRConversationTurnDataXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ rootRequestId;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ requestContextData;
    void /* unknown type, empty encoding */ conversationLoggingId;
    void /* unknown type, empty encoding */ flowTask;
    void /* unknown type, empty encoding */ invokedByPeerToPeerEORR;
    void /* unknown type, empty encoding */ scopedRRData;
    void /* unknown type, empty encoding */ proxiedRequestContext;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
