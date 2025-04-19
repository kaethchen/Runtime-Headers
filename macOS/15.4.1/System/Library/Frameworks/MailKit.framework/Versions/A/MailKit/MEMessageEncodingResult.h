@class NSError, MEEncodedOutgoingMessage;

@interface MEMessageEncodingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) MEEncodedOutgoingMessage *encodedMessage;
@property (readonly, copy) NSError *signingError;
@property (readonly, copy) NSError *encryptionError;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncodedMessage:(id)a0 signingError:(id)a1 encryptionError:(id)a2;

@end
