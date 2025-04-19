@class ABAccount, NSString, NSMutableDictionary, NSMutableArray, ABAddressBook;

@interface ABDictionaryImporter : NSObject {
    ABAccount *_account;
    NSMutableDictionary *_recordMapping;
    NSMutableArray *_importedGroups;
}

@property (copy) NSString *discoveredMeIdentifier;
@property (readonly) ABAddressBook *addressBook;
@property BOOL preservesIdentifiers;

+ (id)migration;

- (void)dealloc;
- (id)init;
- (id)importDictionary:(id)a0;
- (void)_rememberToFinalizeGroup:(id)a0 dictionaryRepresentation:(id)a1;
- (unsigned long long)countOfImportedRecords;
- (void)finalizeImport;
- (id)initWithAddressBook:(id)a0 account:(id)a1;
- (id)mappedIdentifierForIdentifier:(id)a0;
- (id)nts_importDictionary:(id)a0;
- (id)prepareRepresentationForRecordCreation:(id)a0;
- (id)propertiesToImportForRecordType:(id)a0;

@end
