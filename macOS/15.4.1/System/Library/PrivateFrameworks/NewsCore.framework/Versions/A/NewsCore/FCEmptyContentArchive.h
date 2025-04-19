@interface FCEmptyContentArchive : FCContentArchive

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)a0;

@end
