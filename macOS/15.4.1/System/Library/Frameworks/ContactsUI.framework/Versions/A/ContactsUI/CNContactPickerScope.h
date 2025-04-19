@class CNContactCardViewController, CNContactPickerView, CNContactListController, ABPersonListSearchController;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerScope : NSObject

@property (readonly, weak) CNContactPickerView *pickerView;
@property (readonly, weak) CNContactListController *contactListController;
@property (readonly, weak) ABPersonListSearchController *searchController;
@property (readonly, weak) CNContactCardViewController *contactCardViewController;
@property (readonly, weak) id<CNContactPickerInternalResponseDelegate> delegate;
@property (readonly) BOOL shouldShowSelectedContact;

- (void).cxx_destruct;
- (id)initWithInternalResponseDelegate:(id)a0 contactListController:(id)a1 searchController:(id)a2 contactCardViewController:(id)a3 pickerView:(id)a4 shouldShowSelectedContact:(BOOL)a5;

@end
