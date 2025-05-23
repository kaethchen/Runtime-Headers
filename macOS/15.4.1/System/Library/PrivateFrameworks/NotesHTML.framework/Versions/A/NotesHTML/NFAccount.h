@class NSDate, NSString, NSArray, NSManagedObjectContext, NSManagedObjectID, NFFolder, NFTrashFolder, ACAccountCredential, CSSearchableItemAttributeSet, ACAccount;

@interface NFAccount : NSManagedObject <ICSearchIndexable, ICNoteVisibilityTesting, ICNFMCPersistedAccount>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) long long visibilityTestingType;
@property (readonly, copy, nonatomic) NSString *searchIndexingIdentifier;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) unsigned long long searchResultsSection;
@property (readonly, nonatomic) unsigned long long searchResultType;
@property (readonly, nonatomic) BOOL searchResultCanBeDeletedFromNoteContext;
@property (readonly, nonatomic) BOOL isHiddenFromIndexing;
@property (readonly, nonatomic) BOOL isHiddenFromSearch;
@property (readonly, nonatomic) BOOL isMovable;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) NSArray *authorsExcludingCurrentUser;
@property (readonly, copy, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, copy, nonatomic) NSString *searchDomainIdentifier;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (readonly) CSSearchableItemAttributeSet *searchableItemViewAttributeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACAccount *internalParentACAccount;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (nonatomic) BOOL didChooseToMigrate;
@property (copy, nonatomic) NSString *emailAddress;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (retain, nonatomic) NFFolder *rootFolder;
@property (retain, nonatomic) NFTrashFolder *trashFolder;
@property (readonly, weak, nonatomic) NFFolder *defaultFolder;
@property (readonly, weak, nonatomic) NSArray *allFolders;
@property (readonly, nonatomic) long long accountClassPriority;
@property (readonly, nonatomic) BOOL isAolAccount;
@property (readonly, nonatomic) BOOL isICloudAccount;
@property (readonly, nonatomic) BOOL isYahooAccount;
@property (readonly, copy, nonatomic) NSString *internetAccountsUID;
@property (readonly, nonatomic) ACAccount *parentACAccount;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *canonicalEmailAddress;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultAccount:(id)a0;
+ (id)sharedAccountStore;
+ (id)accountWithEmailAddress:(id)a0 inManagedObjectContext:(id)a1;
+ (id)accountWithParentACAccountIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (id)allEnabledAccountsWithContext:(id)a0;
+ (id)defaultAccountWithContext:(id)a0;
+ (id)_initialDefaultAccountWithContext:(id)a0;
+ (id)accountWithInternetAccountsUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)allAccountsWithContext:(id)a0;
+ (id)findAccountForParentACAccount:(id)a0 inManagedObjectContext:(id)a1;
+ (id)keyPathsForValuesAffectingAccountDescription;
+ (id)keyPathsForValuesAffectingDefaultFolder;
+ (id)keyPathsForValuesAffectingParentACAccount;
+ (id)resetDefaultAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)username;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (id)accountDescription;
- (id)emailAddress;
- (BOOL)hasNotes;
- (id)dataForTypeIdentifier:(id)a0;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (void)accountsFrameworkDidChange:(id)a0;
- (id)createDefaultFolderInContext:(id)a0;
- (id)folderEntityName;
- (BOOL)participatesInInternetAccounts;

@end
