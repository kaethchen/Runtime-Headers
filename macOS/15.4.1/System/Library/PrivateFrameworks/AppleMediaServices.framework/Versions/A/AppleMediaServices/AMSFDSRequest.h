@class NSString, AMSFDSOptions, ACAccount, NSNumber;

@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ACAccount *account;
@property (readonly) unsigned long long accountType;
@property (copy) NSString *logKey;
@property (readonly) AMSFDSOptions *options;
@property (readonly, copy) NSNumber *purchaseIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPurchaseIdentifier:(id)a0 account:(id)a1 options:(id)a2;

@end
