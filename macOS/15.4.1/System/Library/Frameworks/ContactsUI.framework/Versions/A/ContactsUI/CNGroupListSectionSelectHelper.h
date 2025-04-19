@class NSString, CNContactPickerView, ABPersonListSearchController;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNGroupListSectionSelectHelper : NSObject <ABGroupSelectHelper> {
    CNContactPickerView *_pickerView;
    id<CNContactPickerInternalResponseDelegate> _delegate;
    ABPersonListSearchController *_searchController;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 contactPickerView:(id)a1 searchController:(id)a2 sectionIdentifier:(id)a3;
- (void)performSelect;
- (void)showSection;
- (void)updateSearchConfiguration;

@end
