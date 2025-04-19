@class NSData;

@interface Sage.ChatMessagesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _messages;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_messages;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
