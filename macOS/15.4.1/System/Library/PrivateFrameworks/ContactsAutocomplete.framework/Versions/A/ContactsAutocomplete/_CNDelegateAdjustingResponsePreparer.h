@interface _CNDelegateAdjustingResponsePreparer : _CNAutocompleteResponsePreparerDecorator

- (void)adjustArray:(id)a0 byAddingResults:(id)a1;
- (void)adjustArray:(id)a0 byRemovingResults:(id)a1;
- (id)prepareResults:(id)a0 forFetch:(id)a1;

@end
