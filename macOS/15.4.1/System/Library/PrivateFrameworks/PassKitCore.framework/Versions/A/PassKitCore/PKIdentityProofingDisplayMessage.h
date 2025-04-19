@class NSString;

@interface PKIdentityProofingDisplayMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *primaryButtonTitle;
@property (readonly, nonatomic, getter=isRetryableError) BOOL retryableError;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 primaryButtonTitle:(id)a2 retryableError:(BOOL)a3;

@end
