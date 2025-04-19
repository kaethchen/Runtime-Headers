@class ABGroupSearchingContext, NSString, CNContactPickerView, ABPersonListSearchController;

@interface CNGroupListSearchingSelectHelper : NSObject <ABGroupSelectHelper> {
    ABGroupSearchingContext *_searchingContext;
    ABPersonListSearchController *_searchController;
    CNContactPickerView *_pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSearchingContext:(id)a0 searchController:(id)a1 pickerView:(id)a2;
- (void)performSelect;

@end
