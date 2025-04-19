@class ABAccount, ABRecordContext, ABGroup, ABAddressBook;

@interface ABGroupDropDestination : NSObject {
    BOOL _acceptsOnlySearchResults;
}

@property (readonly) ABAddressBook *addressBook;
@property (readonly) ABAccount *account;
@property (readonly) ABRecordContext *recordContext;
@property (readonly) ABGroup *group;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0 account:(id)a1 group:(id)a2;

@end
