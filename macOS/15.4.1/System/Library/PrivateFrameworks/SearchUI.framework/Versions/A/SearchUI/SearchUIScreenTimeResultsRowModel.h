@class NSString, SFSearchResult;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (Class)cellViewClass;
- (id)identifyingResult;
- (id)initWithSection:(id)a0 result:(id)a1 itemIdentifier:(id)a2;
- (BOOL)isTappable;

@end
