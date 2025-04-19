@interface STSetting : STSiriModelObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
