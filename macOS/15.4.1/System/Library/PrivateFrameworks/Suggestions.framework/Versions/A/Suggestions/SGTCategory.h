@class NSString, NSArray, SGTCategoryReserved;

@interface SGTCategory : NSObject {
    SGTCategoryReserved *_reserved;
}

@property (readonly) NSString *displayName;
@property (readonly) unsigned long long position;
@property BOOL uniquifiersDrawBelow;
@property BOOL showsImagesInMenu;
@property BOOL proposesCompletion;
@property (readonly) NSArray *attributeNamesForRawSuggestion;

+ (id)topHitCategory;
+ (id)recentsCategory;
+ (id)folderCategory;
+ (id)othersCategory;
+ (id)suggestionsCategory;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)displayNameForRawSuggestionInMenu:(id)a0;
- (id)initWithDisplayName:(id)a0 position:(unsigned long long)a1;
- (BOOL)rawSuggestionShouldCreateToken;

@end
