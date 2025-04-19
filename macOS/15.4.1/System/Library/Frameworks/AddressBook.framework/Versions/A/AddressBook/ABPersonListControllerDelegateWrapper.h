@class NSString;
@protocol ABPersonListDelegate;

@interface ABPersonListControllerDelegateWrapper : NSObject <ABPersonListDelegate>

@property (readonly) id<ABPersonListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)personListDidChangeAddressBook:(id)a0;
- (BOOL)personList:(id)a0 acceptFilenamesDrop:(id)a1;
- (void)entriesChangedInPersonList:(id)a0;
- (BOOL)personList:(id)a0 acceptGroupsDrop:(id)a1;
- (BOOL)personList:(id)a0 canDeleteContactsWithSender:(id)a1;
- (BOOL)personList:(id)a0 deleteContactsWithSender:(id)a1;
- (BOOL)personList:(id)a0 deleteContactsWithoutConfirmationWithSender:(id)a1;
- (void)personList:(id)a0 didSelectEntries:(id)a1;
- (BOOL)personList:(id)a0 ignoreContactsWithSender:(id)a1;
- (BOOL)personList:(id)a0 rejectContactsWithSender:(id)a1;
- (unsigned long long)personList:(id)a0 validateFilenamesDrop:(id)a1;
- (unsigned long long)personList:(id)a0 validateGroupsDrop:(id)a1;
- (void)personListDidDoubleClick:(id)a0;
- (void)setCardEditingMode:(BOOL)a0;
- (BOOL)shouldDrawHorizontalSeparators;
- (void)toggleCardEditingMode:(id)a0;

@end
