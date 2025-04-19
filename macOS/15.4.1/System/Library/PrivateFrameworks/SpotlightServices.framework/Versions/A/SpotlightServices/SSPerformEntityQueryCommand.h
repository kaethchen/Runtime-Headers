@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand

@property (nonatomic) BOOL fromSuggestion;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
