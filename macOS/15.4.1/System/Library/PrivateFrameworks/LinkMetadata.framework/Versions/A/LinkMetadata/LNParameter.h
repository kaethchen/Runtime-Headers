@class LNParameterConfiguration;

@interface LNParameter : LNProperty

@property (readonly, copy, nonatomic) LNParameterConfiguration *configuration;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)initWithIdentifier:(id)a0 value:(id)a1 configuration:(id)a2;

@end
