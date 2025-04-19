@class ICQImageURL;

@interface ICQTipIconURL : ICQTipIcon

@property (retain, nonatomic) ICQImageURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
