@interface SmartReplies.SRSmartRepliesConversationTurn : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ senderID;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
