@class NSMutableArray, MFSyncedSignaturesFile, NSArray, NSDictionary, NSString, NSObject, NSMutableDictionary;
@protocol OS_os_log;

@interface MFSignatureManager : NSObject <EFLoggable> {
    NSMutableDictionary *_signatures;
    NSMutableArray *_accounts;
    NSMutableDictionary *_lastDefaultSignatures;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) MFSyncedSignaturesFile *syncedFile;
@property (readonly, copy, nonatomic) NSArray *signatureAccounts;
@property (readonly, copy, nonatomic) NSDictionary *signatures;
@property (readonly, nonatomic) unsigned long long numberOfSignatures;
@property (nonatomic) BOOL placeSignatureAboveQuotedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_signaturesFolderPath;
+ (id)allSignaturesAccount;
+ (id)signatureContentsFileRelativePathWithUniqueID:(id)a0;
+ (id)signaturesFileRelativePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_loadAccountsIfNeeded;
- (void)addSignature:(id)a0;
- (id)signatureAtIndex:(unsigned long long)a0;
- (void)_loadAllSignatures:(id)a0 forAccounts:(id)a1;
- (void)_loadSignaturesFromDiskIfNeeded;
- (void)setDefaultSignature:(id)a0 forAccount:(id)a1;
- (id)_accountsMap;
- (id)_fixAccountIdsInPlist:(id)a0;
- (void)_loadLastDefaultSignatures;
- (void)_removeSignature:(id)a0;
- (id)_serializedSignatures;
- (void)_setDefaultSignatureId:(id)a0 forAccountId:(id)a1;
- (void)_signatureChanged:(id)a0;
- (void)_signatureManagerChanged:(id)a0;
- (void)_signatureNameChanged:(id)a0;
- (id)activeSignatureWithId:(id)a0;
- (id)activeSignatureWithName:(id)a0;
- (void)configurePopUpButton:(id)a0 forAccount:(id)a1 defaultSignature:(id)a2 selectionMethod:(long long)a3 showAccount:(BOOL)a4;
- (id)defaultSignatureForAccount:(id)a0;
- (void)insertSignature:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertSignature:(id)a0 atIndex:(unsigned long long)a1 forAccount:(id)a2;
- (void)loadSignaturesFromDisk;
- (void)removeSignatureAtIndex:(unsigned long long)a0;
- (void)removeSignatureAtIndex:(unsigned long long)a0 forAccount:(id)a1;
- (void)saveChangesToDisk;
- (void)setShowsComposeAccessoryView:(BOOL)a0;
- (void)setSignatureSelectionMethod:(long long)a0 forAccount:(id)a1;
- (BOOL)showComposeAccessoryView;
- (BOOL)showComposeAccessoryView:(BOOL *)a0;
- (id)signatureAtIndex:(unsigned long long)a0 forAccount:(id)a1;
- (long long)signatureSelectionMethodForAccount:(id)a0;
- (id)signaturesForAccount:(id)a0;
- (void)unsetShowsComposeAccessoryView;
- (BOOL)updateAccountList;

@end
