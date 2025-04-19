@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)contentVersion;
- (id)metadataVersion;

@end
