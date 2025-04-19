@interface CPKEmojiIMDataSource : CPKDefaultDataSource

+ (id)_dataCategories;
+ (void **)_classGlobalBufferPtr;

- (BOOL)_shouldOmitCharacter:(id)a0;
- (id)characterFromIdentifier:(id)a0;
- (BOOL)isEmojiOnlyDataSource;
- (id)storageIdentifier;

@end
