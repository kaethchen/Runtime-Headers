@class NSString, PKSystemIconConfigurationColor;

@interface PKSystemIconConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) PKSystemIconConfigurationColor *color1;
@property (readonly, nonatomic) PKSystemIconConfigurationColor *color2;
@property (readonly, nonatomic) PKSystemIconConfigurationColor *color3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
