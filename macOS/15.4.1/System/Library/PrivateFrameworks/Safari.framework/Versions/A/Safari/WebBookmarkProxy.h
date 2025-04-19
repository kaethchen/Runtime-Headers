@interface WebBookmarkProxy : SafariWebBookmark

- (id)icon;
- (id)iconURLString;
- (id)_mutableDictionaryRepresentation;
- (long long)bookmarkType;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(BOOL)a1 withGroup:(id)a2;

@end
