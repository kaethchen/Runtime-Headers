@class NSData, NSString;

@interface LNSystemNamedColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long systemColor;
@property (nonatomic) unsigned long long colorVariant;
@property (readonly, nonatomic) NSData *tintColorData;
@property (readonly, nonatomic) NSString *tintColorPlatform;
@property (readonly, nonatomic) id platformTintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemColor:(unsigned long long)a0 variant:(unsigned long long)a1;
- (id)initUnsafeWithSystemColor:(unsigned long long)a0 variant:(unsigned long long)a1;

@end
