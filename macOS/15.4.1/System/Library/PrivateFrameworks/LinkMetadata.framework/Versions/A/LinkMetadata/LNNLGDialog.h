@class LNDialog, NSArray, NSString, NSData;

@interface LNNLGDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *securityScopeData;
@property (readonly, copy, nonatomic) NSArray *nlgParams;
@property (readonly, copy, nonatomic) NSString *options;
@property (readonly, copy, nonatomic) LNDialog *fallbackDialog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNLGParams:(id)a0 options:(id)a1 fallbackDialog:(id)a2 localeIdentifier:(id)a3;

@end
