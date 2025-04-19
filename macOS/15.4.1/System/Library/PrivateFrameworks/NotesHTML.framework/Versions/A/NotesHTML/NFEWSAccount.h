@class NFEWSFolder, NSURL, NSString;

@interface NFEWSAccount : NFAccount

@property (retain, nonatomic) NFEWSFolder *rootFolder;
@property (readonly, weak, nonatomic) NFEWSFolder *defaultFolder;
@property (retain, nonatomic) NSURL *externalURL;
@property (retain, nonatomic) NSURL *internalURL;
@property (retain, nonatomic) NSURL *lastUsedAutodiscoverURL;
@property (copy, nonatomic) NSString *folderHierarchySyncState;

+ (id)accountWithEmailAddress:(id)a0 context:(id)a1;
+ (id)accountWithRootFolderID:(id)a0 context:(id)a1;
+ (id)accountWithUsername:(id)a0 internalURL:(id)a1 context:(id)a2;
+ (id)createAccountWithEmailAddress:(id)a0 context:(id)a1;

- (id)externalURL;
- (id)internalURL;
- (id)lastUsedAutodiscoverURL;
- (long long)accountClassPriority;
- (id)createDefaultFolderInContext:(id)a0;
- (id)folderEntityName;
- (BOOL)participatesInInternetAccounts;
- (BOOL)validateRootFolder:(inout id *)a0 error:(out id *)a1;

@end
