@class NSArray, NSString, CNContactPickerInProccessViewController;
@protocol CNContactPickerViewControllerDelegate;

@interface CNContactPickerViewController : NSViewController <CNContactPickerInternalResponseDelegate, CNContactListControllerDelegate> {
    BOOL _shouldHighlightSelectedContact;
    CNContactPickerInProccessViewController *_serviceController;
}

@property (copy, nonatomic) NSArray *displayedKeys;
@property (nonatomic) BOOL allowsNamePicking;
@property (readonly, nonatomic) NSArray *selectedContacts;
@property (getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property (weak) id<CNContactPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)view;
- (id)initWithConfiguration:(id)a0;
- (void)addSection:(id)a0;
- (void)didSearchForString:(id)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didShowSectionWithIdentifier:(id)a0;
- (void)dismissRequested:(BOOL)a0;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)selectSectionWithIdentifier:(id)a0;
- (void)selectionChanged:(BOOL)a0;
- (void)setContactListBottomContentInset:(double)a0;
- (id)viewForButtonConstraints;

@end
