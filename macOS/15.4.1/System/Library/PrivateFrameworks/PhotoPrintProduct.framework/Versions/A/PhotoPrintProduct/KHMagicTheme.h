@class NSString;

@interface KHMagicTheme : KHTheme

@property (copy) NSString *magicIdentifier;
@property unsigned long long magicModelId;

+ (void)_adjustSizeOfLayoutForJournalTheme:(id)a0 toSize:(int)a1;
+ (void)_adjustSizeOfLayoutForNoneTheme:(id)a0 toSize:(int)a1;
+ (double)_photoLongDimensionForSize:(int)a0;
+ (void)adjustSizeOfLayout:(id)a0 toSize:(int)a1;
+ (id)magicEmailThemeForIdentifier:(id)a0;
+ (id)magicEmailThemes;

- (id)name;
- (id)identifier;
- (unsigned long long)modelId;
- (id)bestLayoutForPhotos:(id)a0 forProduct:(id)a1;
- (id)magicJournalLayoutForPhotos:(id)a0 andProduct:(id)a1;
- (id)magicNoneLayoutForPhotos:(id)a0 andProduct:(id)a1;

@end
