@class NSArray, NSImage, NSString;

@interface MUISearchSuggestionCategory : NSObject <NSCopying>

@property (weak, nonatomic) MUISearchSuggestionCategory *groupingCategory;
@property (copy, nonatomic) NSImage *image;
@property (copy, nonatomic) NSImage *atomImage;
@property (copy, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *parsecCategory;
@property (copy, nonatomic) id /* block */ imageInstantiationBlock;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isLegacy;

+ (id)contactCategory;
+ (id)genericCategory;
+ (id)topHitsCategory;
+ (id)allMailboxesCategory;
+ (id)documentCategory;
+ (id)instantAnswersCategory;
+ (id)linkCategory;
+ (id)locationCategory;
+ (id)recentGenericCategory;
+ (id)recentSearchCategory;
+ (id)suggestedSearchCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0;
- (unsigned long long)indexOfScopeWithIdentifier:(id)a0;
- (id)initWithDisplayName:(id)a0 groupingCategory:(id)a1;
- (BOOL)isGroupedInCategory:(id)a0;

@end
