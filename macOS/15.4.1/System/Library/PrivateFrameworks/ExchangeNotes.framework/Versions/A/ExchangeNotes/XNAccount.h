@class NSString, XNFolder;

@interface XNAccount : XNManagedObject

@property (readonly, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *changeKey;
@property (readonly, nonatomic) XNFolder *defaultFolder;
@property (readonly, nonatomic) XNFolder *rootFolder;
@property (readonly, nonatomic) NSString *currentChangeToken;

+ (id)accountWithIdentifier:(id)a0;
+ (id)createAccountWithIdentifier:(id)a0 name:(id)a1 email:(id)a2 type:(id)a3;
+ (id)createAccountWithIdentifier:(id)a0 name:(id)a1 email:(id)a2 type:(id)a3 error:(id *)a4;
+ (id)currentChangeTokenForAccountIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)didSync;
- (Class)changeClassForDictionary:(id)a0;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 changeKey:(id)a2;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 changeKey:(id)a2 error:(id *)a3;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 error:(id *)a2;
- (BOOL)deleteAccountWithError:(id *)a0;
- (void)fetchChangesSinceToken:(id)a0 withReply:(id /* block */)a1;
- (id)initWithObjectIDURIString:(id)a0 defaultFolderObjectIDURIString:(id)a1 rootFolderObjectIDURIString:(id)a2 accountID:(id)a3;
- (void)willSync;

@end
