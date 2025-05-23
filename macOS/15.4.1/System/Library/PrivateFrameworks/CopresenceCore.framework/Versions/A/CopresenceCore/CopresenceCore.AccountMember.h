@interface CopresenceCore.AccountMember : NSObject <NSObject, NSSecureCoding> {
    void /* unknown type, empty encoding */ isLocalAccount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
