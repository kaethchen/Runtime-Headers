@class NSString, ABAccount, ABAddressBook;

@interface ABPersonVCardParsedResultBuilderFactory : NSObject <CNVCardParsedResultBuilderFactory> {
    ABAddressBook *_addressBook;
    ABAccount *_account;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryWithAddressBook:(id)a0 account:(id)a1;

- (void)dealloc;
- (id)makeBuilder;
- (id)initWithAddressBook:(id)a0 account:(id)a1;

@end
