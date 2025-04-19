@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider

@property (readonly, copy) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;

@end
