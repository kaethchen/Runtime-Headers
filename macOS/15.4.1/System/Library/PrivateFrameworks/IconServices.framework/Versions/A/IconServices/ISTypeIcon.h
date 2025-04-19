@class NSString;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbol;
- (id)initWithType:(id)a0;
- (id)_fallbackKey;
- (id)makeResourceProvider;

@end
