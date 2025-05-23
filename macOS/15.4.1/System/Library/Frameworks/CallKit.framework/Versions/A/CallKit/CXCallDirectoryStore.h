@class NSURL, NSString, CXDatabase;

@interface CXCallDirectoryStore : NSObject

@property (class, readonly, nonatomic) NSURL *databaseTemplateURL;

@property (retain, nonatomic) CXDatabase *database;
@property (nonatomic, getter=isTemporary) BOOL temporary;
@property (nonatomic) long long lastAddBlockingEntriesCount;
@property (copy, nonatomic) NSString *addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
@property (nonatomic) long long lastRemoveBlockingEntriesCount;
@property (copy, nonatomic) NSString *removeBlockingEntriesSQL;
@property (nonatomic) long long lastAddIdentificationEntriesCount;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertLabelsSQL;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
@property (nonatomic) long long lastAddPhoneNumbersCount;
@property (copy, nonatomic) NSString *addPhoneNumbersSQL;
@property (nonatomic) long long lastRemoveIdentificationEntriesCount;
@property (copy, nonatomic) NSString *removeIdentificationEntriesSQL;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, nonatomic, getter=isCorrupt) BOOL corrupt;

+ (id)databaseURLUsingTemporaryDirectory:(BOOL)a0 error:(id *)a1;
+ (BOOL)initializeDatabaseIfNecessaryAtURL:(id)a0 usingTemplateAtURL:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)extensionWithIdentifier:(id)a0 error:(id *)a1;
- (id)prioritizedExtensionsWithError:(id *)a0;
- (BOOL)_addBlockingEntriesWithData:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2 extensionID:(long long)a3 error:(id *)a4;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)a0 entryString:(id)a1;
- (long long)addLabel:(id)a0 error:(id *)a1;
- (BOOL)setStateForAllExtensions:(long long)a0 error:(id *)a1;
- (BOOL)_addIdentificationEntriesWithData:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2 extensionID:(long long)a3 error:(id *)a4;
- (BOOL)_addPhoneNumbersWithEntryData:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_containsBlockingEntryWithSQL:(id)a0 bindings:(id)a1 error:(id *)a2;
- (long long)_findOrCreateIDForPhoneNumber:(long long)a0 error:(id *)a1;
- (id)_firstIdentificationEntriesForSQL:(id)a0 bindings:(id)a1 error:(id *)a2;
- (id)_firstIdentificationEntryForSQL:(id)a0 bindings:(id)a1 error:(id *)a2;
- (BOOL)_parseFirstIdentificationEntriesForSQL:(id)a0 bindings:(id)a1 handler:(id /* block */)a2 error:(id *)a3;
- (BOOL)_parseIdentificationEntriesForSQL:(id)a0 bindings:(id)a1 handler:(id /* block */)a2 error:(id *)a3;
- (BOOL)_removeBlockingEntriesWithData:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2 extensionID:(long long)a3 error:(id *)a4;
- (BOOL)_removeIdentificationEntriesWithData:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2 extensionID:(long long)a3 error:(id *)a4;
- (BOOL)_removeUnreferencedLabelsWithError:(id *)a0;
- (BOOL)_removeUnreferencedPhoneNumbersWithError:(id *)a0;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)a0 withPriorityOffset:(long long)a1;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)a0 defaultValue:(id)a1 numberOfPairs:(unsigned long long)a2;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)a0;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)a0 localizedLabel:(id)a1;
- (BOOL)addBlockingEntriesWithData:(id)a0 extensionID:(long long)a1 error:(id *)a2;
- (BOOL)addBlockingEntryWithPhoneNumber:(long long)a0 extensionID:(long long)a1 error:(id *)a2;
- (long long)addExtensionWithIdentifier:(id)a0 error:(id *)a1;
- (long long)addExtensionWithIdentifier:(id)a0 priority:(long long)a1 error:(id *)a2;
- (BOOL)addIdentificationEntriesWithData:(id)a0 extensionID:(long long)a1 error:(id *)a2;
- (BOOL)addIdentificationEntryWithPhoneNumber:(long long)a0 labelID:(long long)a1 extensionID:(long long)a2 error:(id *)a3;
- (BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)a0 error:(id *)a1;
- (BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)a0 error:(id *)a1;
- (BOOL)containsBlockingEntryWithPhoneNumber:(id)a0 error:(id *)a1;
- (BOOL)containsBlockingEntryWithPhoneNumberInArray:(id)a0 error:(id *)a1;
- (BOOL)containsExtensionWithIdentifier:(id)a0 error:(id *)a1;
- (id)firstEnabledBlockingExtensionIdentifierForPhoneNumber:(id)a0 error:(id *)a1;
- (id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 error:(id *)a1;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)a0 error:(id *)a1;
- (id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)a0 error:(id *)a1;
- (id)firstIdentificationEntryForPhoneNumber:(id)a0 error:(id *)a1;
- (long long)idForExtensionWithIdentifier:(id)a0 error:(id *)a1;
- (long long)idForLabel:(id)a0 error:(id *)a1;
- (long long)idForPhoneNumber:(long long)a0 error:(id *)a1;
- (id)initForReadingAndWritingWithError:(id *)a0;
- (id)initForReadingWithError:(id *)a0;
- (id)initReadOnly:(BOOL)a0 temporary:(BOOL)a1 error:(id *)a2;
- (id)initWithTemplateURL:(id)a0 readOnly:(BOOL)a1 temporary:(BOOL)a2 error:(id *)a3;
- (BOOL)performTransactionWithBlock:(id /* block */)a0 error:(id *)a1;
- (id)prioritizedExtensionIdentifiersWithError:(id *)a0;
- (BOOL)removeBlockingEntriesForExtensionWithID:(long long)a0 error:(id *)a1;
- (BOOL)removeBlockingEntriesWithData:(id)a0 extensionID:(long long)a1 error:(id *)a2;
- (BOOL)removeExtensionWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeIdentificationEntriesForExtensionWithID:(long long)a0 error:(id *)a1;
- (BOOL)removeIdentificationEntriesWithData:(id)a0 extensionID:(long long)a1 error:(id *)a2;
- (BOOL)removeUnreferencedRecordsWithError:(id *)a0;
- (long long)schemaVersionWithError:(id *)a0;
- (BOOL)setPrioritizedExtensionIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)setState:(long long)a0 forExtensionWithID:(long long)a1 error:(id *)a2;
- (BOOL)setState:(long long)a0 forExtensionWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setStateLastModifiedDate:(id)a0 forExtensionWithID:(long long)a1 error:(id *)a2;
- (BOOL)vacuumWithError:(id *)a0;

@end
