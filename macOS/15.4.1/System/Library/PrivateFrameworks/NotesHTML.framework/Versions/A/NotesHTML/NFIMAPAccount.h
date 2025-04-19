@class ACAccountCredential, NFIMAPFolder, NSString, NSManagedObject, ACAccount, NSSet, NSData;
@protocol ICNFIMAPPersistedMailbox;

@interface NFIMAPAccount : NFAccount <ICNFIMAPPersistedAccount>

@property (readonly, nonatomic) ACAccount *imapACAccount;
@property (retain, nonatomic) NFIMAPFolder *rootFolder;
@property (readonly, weak, nonatomic) NFIMAPFolder *defaultFolder;
@property (readonly, nonatomic) NFIMAPFolder *defaultMailbox;
@property (copy, nonatomic) NSString *authentication;
@property (readonly, nonatomic) NSManagedObject<ICNFIMAPPersistedMailbox> *inbox;
@property (nonatomic) long long gmailCapabilitiesSupport;
@property (copy, nonatomic) NSString *serverPathPrefix;
@property (readonly, copy, nonatomic) NSSet *mailboxes;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) long long port;
@property (nonatomic) long long securityLayerType;
@property (copy, nonatomic) NSData *tlsCertificate;
@property (copy, nonatomic) NSString *authenticationSchemeName;
@property (readonly, nonatomic) ACAccount *acAccount;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *canonicalEmailAddress;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountWithEmailAddress:(id)a0 context:(id)a1;
+ (id)accountWithUsername:(id)a0 hostname:(id)a1 context:(id)a2;
+ (id)createAccountWithEmailAddress:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingIsICloudAccount;

- (void).cxx_destruct;
- (id)password;
- (long long)port;
- (void)setPassword:(id)a0;
- (id)hostname;
- (BOOL)usesSSL;
- (BOOL)isYahooAccount;
- (long long)securityLayerType;
- (id)serverPathPrefix;
- (BOOL)isICloudAccount;
- (long long)accountClassPriority;
- (void)accountsFrameworkDidChange:(id)a0;
- (void)addMailboxes:(id)a0;
- (id)createDefaultFolderInContext:(id)a0;
- (id)folderEntityName;
- (id)folderWithServerName:(id)a0;
- (BOOL)isAolAccount;
- (id)newMailboxWithName:(id)a0 serverName:(id)a1 parent:(id)a2;
- (id)objectIDOfMailboxWithServerName:(id)a0;
- (BOOL)participatesInInternetAccounts;
- (BOOL)validateRootFolder:(inout id *)a0 error:(out id *)a1;

@end
