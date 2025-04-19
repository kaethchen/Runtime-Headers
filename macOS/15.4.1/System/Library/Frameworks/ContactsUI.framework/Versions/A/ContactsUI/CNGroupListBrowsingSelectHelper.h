@class NSString, CNContactPickerView, ABPersonListSearchController, ABGroupBrowsingContext;

@interface CNGroupListBrowsingSelectHelper : NSObject <ABGroupSelectHelper> {
    ABGroupBrowsingContext *_browsingContext;
    ABPersonListSearchController *_searchController;
    CNContactPickerView *_pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBrowsingContext:(id)a0 searchController:(id)a1 pickerView:(id)a2;
- (void)performSelect;

@end
