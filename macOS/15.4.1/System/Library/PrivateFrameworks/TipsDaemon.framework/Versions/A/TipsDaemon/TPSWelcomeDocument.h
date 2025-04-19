@class NSString;

@interface TPSWelcomeDocument : TPSDocument

@property (copy, nonatomic) NSString *majorVersion;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
