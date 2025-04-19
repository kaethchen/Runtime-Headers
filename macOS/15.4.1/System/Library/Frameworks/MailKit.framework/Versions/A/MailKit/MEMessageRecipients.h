@class NSArray;

@interface MEMessageRecipients : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *to;
@property (readonly, copy) NSArray *cc;
@property (readonly, copy) NSArray *bcc;
@property (readonly, copy) NSArray *replyTo;
@property (readonly, copy) NSArray *allRecipients;

+ (id)emailAddressesForEmailAddressStrings:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStringsTo:(id)a0 cc:(id)a1 bcc:(id)a2 replyTo:(id)a3;
- (id)initWithTo:(id)a0 cc:(id)a1 bcc:(id)a2 replyTo:(id)a3;

@end
