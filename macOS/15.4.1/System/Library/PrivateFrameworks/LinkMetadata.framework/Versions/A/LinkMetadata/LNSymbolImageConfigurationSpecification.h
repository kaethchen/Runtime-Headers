@class LNSymbolConfiguration, NSString, NSData;

@interface LNSymbolImageConfigurationSpecification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNSymbolConfiguration *platformAgnosticConfiguration;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSData *platformSpecificData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatformAgnosticConfiguration:(id)a0;
- (id)initWithPlatformSpecificationConfigurationData:(id)a0 platform:(id)a1;

@end
