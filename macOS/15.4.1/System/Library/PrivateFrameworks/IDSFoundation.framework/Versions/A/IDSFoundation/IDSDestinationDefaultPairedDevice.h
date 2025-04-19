@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (BOOL)isEqualToIDSDestinationDefaultPairedDevice:(id)a0;

@end
