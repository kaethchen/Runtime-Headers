@class NSString, NSArray, TPSContent, TPSAssets, TPSGradient;

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countText;
@property (copy, nonatomic) TPSContent *featuredContent;
@property (copy, nonatomic) TPSContent *tileContent;
@property (copy, nonatomic) TPSAssets *tocAssets;
@property (copy, nonatomic) TPSAssets *collectionAssets;
@property (copy, nonatomic) TPSGradient *gradient;
@property (readonly, nonatomic, getter=isChecklist) BOOL checklist;
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured;
@property (nonatomic) BOOL containsIntroTip;
@property (nonatomic) BOOL containsOutroTip;
@property (copy, nonatomic) NSArray *tipIdentifiers;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *featuredTitle;
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;

+ (id)na_identity;
+ (id)collectionLabelForDictionary:(id)a0;
+ (id)collectionOrderIdentifierForDictionary:(id)a0;
+ (id)tipIdentifiersForDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)priority;
- (id)title;
- (id)text;
- (id)assets;
- (id)footnote;
- (id)URLWithReferrer:(id)a0;
- (long long)countExcludingBookends;
- (id)featuredAssets;
- (id)featuredTitle;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 text:(id)a2 metadata:(id)a3 tocAssets:(id)a4 collectionAssets:(id)a5 tipIdentifiers:(id)a6;
- (BOOL)isHardwareWelcome;
- (BOOL)isSoftwareWelcome;
- (BOOL)isSwitcherWelcome;
- (id)tileAssets;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;

@end
