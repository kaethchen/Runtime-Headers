@class NSString;

@interface ICQTipIconSymbol : ICQTipIcon

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *systemColorName;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
