@class NSMutableDictionary, ABAccount, ABAddressBook;

@interface ABMetadataRecordFactory : NSObject {
    ABAddressBook *_addressBook;
    ABAccount *_account;
    NSMutableDictionary *_recordMapping;
}

- (void).cxx_destruct;
- (id)account;
- (id)initWithAddressBook:(id)a0 recordMapping:(id)a1;
- (id)initWithAddressBook:(id)a0 recordMapping:(id)a1 account:(id)a2;
- (id)makeGroupWithDictionaryRepresentation:(id)a0;
- (id)makeInfoWithDictionaryRepresentation:(id)a0;
- (id)makePersonWithDictionaryRepresentation:(id)a0;
- (id)makeRecordWithClass:(Class)a0 dictionary:(id)a1 generateIds:(BOOL)a2;
- (id)makeSmartGroupWithDictionaryRepresentation:(id)a0;

@end
