@class NSURL, NSArray, NSString;

@interface BRCDatabaseBackupManager : NSObject <BRDatabaseBackupManagerProtocol>

@property (retain, nonatomic) NSURL *userURL;
@property (retain, nonatomic) NSURL *outputUserURL;
@property (retain, nonatomic) NSURL *destinationDirectory;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) NSArray *urlPropertiesToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0 outputUserURL:(id)a1;
- (void)backUpWithCompletionBlock:(id /* block */)a0;
- (void)cleanOnDisk;
- (id)desiredBackupDataDirectoryForUserURL:(id)a0;
- (BOOL)enumerateRootURL:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateURL:(id)a0 rootURL:(id)a1 usingBlock:(id /* block */)a2 error:(id *)a3;

@end
