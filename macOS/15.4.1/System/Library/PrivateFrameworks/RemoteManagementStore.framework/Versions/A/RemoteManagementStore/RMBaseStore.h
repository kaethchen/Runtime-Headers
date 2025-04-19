@class NSString, NSURL, RMStoreXPCConnection;

@interface RMBaseStore : NSObject <RMStoreProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *storeDescription;
@property (copy, nonatomic) NSURL *enrollmentURL;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL defaultToInteractive;
@property (nonatomic) BOOL dataSeparated;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) RMStoreXPCConnection *xpcConnection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqualToStore:(id)a0;
- (void)declarationManifestWithCompletionHandler:(id /* block */)a0;
- (void)declarationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)declarationsWithCompletionHandler:(id /* block */)a0;
- (void)declarationsWithTypes:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 scope:(long long)a2 name:(id)a3 description:(id)a4 enrollmentURL:(id)a5 accountIdentifier:(id)a6 defaultToInteractive:(BOOL)a7 dataSeparated:(BOOL)a8 personaIdentifier:(id)a9;
- (BOOL)isManagedStore;
- (BOOL)isValidDeclaration:(id)a0;
- (id)metadataReturningError:(id *)a0;
- (id)metadataValueForKey:(id)a0 error:(id *)a1;
- (void)setShouldInstallConfiguration:(id)a0 shouldInstall:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)waitForActiveAndValidDeclarations:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
