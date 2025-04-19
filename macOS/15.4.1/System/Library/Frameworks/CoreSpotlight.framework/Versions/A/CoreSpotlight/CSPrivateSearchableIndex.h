@interface CSPrivateSearchableIndex : CSUnhousedSearchableIndex

+ (id)defaultSearchableIndex;

- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;
- (const char *)defaultIndexPath;
- (id)initialConnection;

@end
