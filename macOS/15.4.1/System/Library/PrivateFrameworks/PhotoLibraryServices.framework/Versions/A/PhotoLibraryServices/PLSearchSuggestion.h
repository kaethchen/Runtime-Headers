@class NSString, NSArray;

@interface PLSearchSuggestion : NSObject

@property (readonly, nonatomic) NSString *contentString;
@property (readonly, nonatomic) unsigned long long categoriesType;
@property (readonly, nonatomic) unsigned long long suggestionType;
@property (readonly, nonatomic) unsigned long long matchedAssetsCount;
@property (readonly, nonatomic) unsigned long long matchedCollectionsCount;
@property (readonly, nonatomic) NSString *matchedText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRangeOfSearchText;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) NSArray *suggestionComponents;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentString:(id)a0 categoriesType:(unsigned long long)a1 suggestionType:(unsigned long long)a2 matchedAssetsCount:(unsigned long long)a3 matchedCollectionsCount:(unsigned long long)a4 matchedText:(id)a5 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 suggestionComponents:(id)a7;

@end
