@interface ASCBlockDynamicColor : NSDynamicNamedColor

@property (readonly, copy, nonatomic) id /* block */ dynamicProvider;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedColor;
- (id)initWithDynamicProvider:(id /* block */)a0;

@end
