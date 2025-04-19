@interface CSManagedSearchableIndex : CSUnhousedSearchableIndex

+ (id)defaultSearchableIndex;

- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;
- (const char *)defaultIndexPath;
- (id)initialConnection;
- (void)setUISearchEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
