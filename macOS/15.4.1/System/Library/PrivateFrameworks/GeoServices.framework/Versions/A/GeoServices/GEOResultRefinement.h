@class GEOResultRefinementMultiSelect, GEOResultRefinementToggle, GEOResultRefinementSort, GEOResultRefinementOpenOptions;

@interface GEOResultRefinement : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) GEOResultRefinementToggle *toggle;
@property (retain, nonatomic) GEOResultRefinementMultiSelect *multiSelect;
@property (retain, nonatomic) GEOResultRefinementSort *sort;
@property (retain, nonatomic) GEOResultRefinementOpenOptions *openOptions;

- (void).cxx_destruct;
- (id)initWithToggle:(id)a0;
- (id)convertToGEOPDResultRefinement;
- (id)initWithMultiSelect:(id)a0;
- (id)initWithOpenOptions:(id)a0;
- (id)initWithResultRefinement:(id)a0;
- (id)initWithSort:(id)a0;

@end
