@class NSString, PSIGroup;

@interface PLSearchSuggestionComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSIGroup *group;
@property (readonly, nonatomic) NSString *contentString;
@property (readonly, nonatomic) unsigned long long indexCategory;
@property (readonly, nonatomic) unsigned long long userCategory;
@property (readonly, nonatomic) unsigned long long suggestionType;
@property (readonly, nonatomic) unsigned long long matchedAssetsCount;
@property (readonly, nonatomic) unsigned long long matchedCollectionsCount;
@property (readonly, nonatomic) unsigned long long psiGroupId;
@property (readonly, nonatomic) unsigned long long psiOwningGroupId;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRangeOfSearchText;
@property (readonly, nonatomic) NSString *matchedText;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) float score;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentString:(id)a0 groupId:(unsigned long long)a1 owningGroupId:(unsigned long long)a2 matchedAssetsCount:(unsigned long long)a3 matchedCollectionsCount:(unsigned long long)a4 indexCategory:(unsigned long long)a5 lookupIdentifier:(id)a6 score:(float)a7 suggestionType:(unsigned long long)a8 matchedText:(id)a9 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10;
- (id)initWithGroup:(id)a0 matchedAssetsCount:(unsigned long long)a1 matchedCollectionsCount:(unsigned long long)a2 suggestionType:(unsigned long long)a3 matchedText:(id)a4 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;

@end
