@class NSTableView, NSString, NSArray, SSContact, SSContactsTokenField, NSMutableDictionary, NSScrollView, NSSet, CNContactStore, NSWindow, NSObject, IDSBatchIDQueryController;
@protocol OS_dispatch_queue, CNKeyDescriptor;

@interface SSContactsTokenFieldDelegate : NSObject <NSTextFieldDelegate, NSTokenFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, IDSBatchIDQueryControllerDelegate>

@property (retain) CNContactStore *cnStore;
@property (retain) id<CNKeyDescriptor> listOfKeysNeededToGetFullName;
@property SSContactsTokenField *tokenField;
@property (retain) IDSBatchIDQueryController *idQueryController;
@property (copy) NSArray *matchingContacts;
@property (retain) NSMutableDictionary *availabilityByID;
@property (retain) SSContact *selectedContact;
@property int selectedIDSIndex;
@property (copy) NSString *previousPartialString;
@property (retain) NSWindow *completionWindow;
@property (retain) NSTableView *completionTableView;
@property (retain) NSScrollView *completionTableScrollView;
@property (copy) NSSet *recentItems;
@property (retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validIDSIDColor;

- (void)dealloc;
- (id)init;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)idStatusUpdatedForDestinations:(id)a0;
- (void)_closeCompletionWindow;
- (id)_bestMatchingIdentifierForContact:(id)a0;
- (id)_completionTableView;
- (id)_displayStringForContact:(id)a0;
- (void)_presentCompletionWindow;
- (void)_selectTableViewRow:(unsigned long long)a0;
- (long long)_string:(id)a0 indexAfterPrefixIgnoringCase:(id)a1;
- (BOOL)_textViewContainsToken:(id)a0;
- (void)_tokenizeAndSelect;
- (void)controlTextCompletionEditingString:(id)a0;
- (void)dismissCompletionWindow:(id)a0;
- (id)nameAndEmailPredicatesForSubstring:(id)a0;
- (id)recentItemWithPortForURL:(id)a0;

@end
