@interface SIRINLUReferenceContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL contextualReference;
@property (nonatomic) BOOL disambiguationNeeded;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextualReference:(BOOL)a0 DisambiguationNeeded:(BOOL)a1;

@end
