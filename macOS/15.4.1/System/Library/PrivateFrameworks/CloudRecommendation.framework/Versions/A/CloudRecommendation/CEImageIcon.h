@class NSURL;

@interface CEImageIcon : CEIcon

@property (retain, nonatomic) NSURL *URL1x;
@property (retain, nonatomic) NSURL *URL2x;
@property (retain, nonatomic) NSURL *URL3x;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
