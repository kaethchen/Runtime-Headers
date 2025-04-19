@class NSString, LNSymbolImageConfigurationSpecification, LNSymbolImageColorization, NSData, LNSymbolConfiguration;

@interface LNSymbolImage : LNImage

@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) LNSymbolImageColorization *colorization;
@property (readonly, nonatomic) LNSymbolImageConfigurationSpecification *configurationSpecification;
@property (readonly, nonatomic) NSData *tintColorData;
@property (readonly, nonatomic) NSData *configurationData;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) LNSymbolConfiguration *platformAgnosticSymbolConfiguration;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbolSystemName:(id)a0 colorization:(id)a1 configuration:(id)a2;
- (id)proxiedImageCopy;
- (id)initWithSymbolSystemName:(id)a0;
- (id)initWithSymbolSystemName:(id)a0 tintColorData:(id)a1 configurationData:(id)a2 platform:(id)a3;
- (id)initWithSymbolSystemName:(id)a0 tintColorData:(id)a1 platformAgnosticConfiguration:(id)a2 platform:(id)a3;

@end
