@interface FSItemSetAttributesRequest : FSItemAttributes

@property (nonatomic) long long consumedAttributes;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wasAttributeConsumed:(long long)a0;

@end
