@interface NSFileProviderKnownFolderLocation : NSObject

- (id)initWithExistingItemIdentifier:(id)a0;
- (id)asExistingLocation;
- (id)asPathMatchingLocation;
- (id)initWithParentItemIdentifier:(id)a0 filename:(id)a1;

@end
