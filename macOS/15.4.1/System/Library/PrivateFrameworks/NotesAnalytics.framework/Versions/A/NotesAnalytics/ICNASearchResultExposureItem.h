@class NSString;

@interface ICNASearchResultExposureItem : NSObject

@property (readonly, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long topHitResultCount;
@property (nonatomic) unsigned long long nonTopHitResultCount;
@property (nonatomic) unsigned long long attachmentSectionCount;
@property (nonatomic) BOOL searchResultWasSelected;

- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0;
- (void)updateWithTopHitResultCount:(unsigned long long)a0 nonTopHitResultCount:(unsigned long long)a1 attachmentSectionCount:(unsigned long long)a2;

@end
