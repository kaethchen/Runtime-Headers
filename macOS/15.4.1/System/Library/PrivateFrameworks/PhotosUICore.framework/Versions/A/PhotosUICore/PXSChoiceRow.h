@class NSArray;

@interface PXSChoiceRow : PXSRow

@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) NSArray *possibleTitles;

- (void).cxx_destruct;
- (id)possibleValues:(id)a0 titles:(id)a1;
- (id)possibleValues:(id)a0;
- (id)createValueView;
- (void)_handlePopUpButton:(id)a0;
- (id)possibleValues:(id)a0 formatter:(id /* block */)a1;
- (void)prepareValueViewForReuse:(id)a0;
- (id)px_possibleValues:(id)a0;
- (id)searchableStrings;
- (void)updateValueView:(id)a0;

@end
