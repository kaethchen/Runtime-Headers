@class NSArray, SPDataIntegrityCheck;

@interface SPSharedSecretsDataCheck : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *completeness;
@property (copy, nonatomic) NSArray *secrets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCompleteness:(id)a0 secrets:(id)a1;

@end
