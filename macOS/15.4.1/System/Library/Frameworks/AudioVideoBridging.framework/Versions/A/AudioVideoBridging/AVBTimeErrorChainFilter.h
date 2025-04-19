@class NSArray;

@interface AVBTimeErrorChainFilter : AVBTimeErrorFilter {
    NSArray *_filters;
}

- (void).cxx_destruct;
- (void)resetFilter;
- (double)filteredErrorForError:(double)a0;
- (id)initWithFilters:(id)a0;

@end
