@interface SIRINLUParser : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int algorithmType;
@property (nonatomic) int parserIdentifier;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlgorithmType:(int)a0 parserIdentifier:(int)a1;

@end
