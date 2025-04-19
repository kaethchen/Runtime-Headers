@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
    id _owner;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;

@end
