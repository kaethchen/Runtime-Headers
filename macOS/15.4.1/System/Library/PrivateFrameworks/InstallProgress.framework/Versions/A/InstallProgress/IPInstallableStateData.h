@class LSApplicationIdentity;

@interface IPInstallableStateData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSApplicationIdentity *identity;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 isInstalling:(BOOL)a1;

@end
