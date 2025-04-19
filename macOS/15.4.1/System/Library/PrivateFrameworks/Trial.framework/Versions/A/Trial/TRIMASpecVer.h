@class NSString;

@interface TRIMASpecVer : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *specifier;
@property (readonly, nonatomic) NSString *version;

+ (id)specVerWithSpecifier:(id)a0 version:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementSpecifier:(id)a0;
- (id)copyWithReplacementVersion:(id)a0;
- (id)initWithSpecifier:(id)a0 version:(id)a1;
- (BOOL)isEqualToSpecVer:(id)a0;

@end
