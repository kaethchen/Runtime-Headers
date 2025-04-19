@class NSArray, CNAutocompletePresentationManager;

@interface CNMixedModelAutocompleteResultWindow : CNAutocompleteResultWindow

@property (retain, nonatomic) NSArray *mixedModelArray;
@property (retain, nonatomic) CNAutocompletePresentationManager *presentationManager;

- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didClickTableColumn:(id)a1;
- (void)setAutocompleteResults:(id)a0;
- (id)viewForResult:(id)a0;
- (void)refreshAutocompleteResult:(id)a0;
- (BOOL)selectAutocompleteResult:(id)a0;
- (void)setAutocompletePresentationType:(long long)a0 forResult:(id)a1;

@end
