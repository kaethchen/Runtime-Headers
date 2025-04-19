@class NSString;

@interface ISO18013RequestElement : NSObject <NSSecureCoding> {
    unsigned short _retentionIntent;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
