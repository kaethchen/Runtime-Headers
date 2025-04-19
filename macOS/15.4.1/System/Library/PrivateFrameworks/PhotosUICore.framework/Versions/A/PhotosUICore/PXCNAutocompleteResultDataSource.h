@class NSArray;

@interface PXCNAutocompleteResultDataSource : PXRecipientSearchDataSource {
    NSArray *_concreteResults;
}

- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithConcreteResults:(id)a0;

@end
