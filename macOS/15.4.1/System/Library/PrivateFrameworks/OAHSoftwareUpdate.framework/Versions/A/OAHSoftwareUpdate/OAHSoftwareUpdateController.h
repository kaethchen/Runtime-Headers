@class NSString, NSArray, OAHSoftwareUpdateWindowController, NSURL, OAHUpdateServiceController, OAHSoftwareUpdateDownloader, PKInstallClient;

@interface OAHSoftwareUpdateController : NSObject

@property (retain) OAHSoftwareUpdateDownloader *downloader;
@property (retain) OAHSoftwareUpdateWindowController *windowController;
@property (retain) OAHUpdateServiceController *updateServiceController;
@property (copy) id /* block */ installCompletionBlock;
@property (copy) id /* block */ installProgressBlock;
@property (retain) NSArray *packageSpecifiers;
@property (retain) NSArray *products;
@property (retain) NSURL *downloadDirectory;
@property (retain) PKInstallClient *installClient;
@property (retain, nonatomic) NSString *OSBuildVersion;
@property (readonly) NSArray *packageSpecifiersPaths;

+ (BOOL)shouldPerformOAHSoftwareUpdate;
+ (BOOL)shouldPerformOAHSoftwareUpdateWithMoreInfoLink:(id *)a0;
+ (void)updateIsInstallableWithCompletion:(id /* block */)a0;
+ (BOOL)updateIsInstalled;
+ (void)updateIsPermittedWithCompletion:(id /* block */)a0;
+ (void)updateIsPermittedWithMoreInfoCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_debugModeEnabled;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (void)installClientDidFinish:(id)a0;
- (void)installClientDidBegin:(id)a0;
- (void)downloadProductToDirectory:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)startUpdateWithOptions:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)updateIsAvailableWithCustomOSBuildVersion:(id)a0 completionWithError:(id /* block */)a1;
- (void)_createInstallClientWithRequest:(id)a0;
- (BOOL)_entitlementSatisfied;
- (void)_installProductWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_startUpdateWithOptions:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)clearRepositoryWithError:(id *)a0;
- (void)executeInstallCompletionWithError:(id)a0;
- (void)executeInstallProgressBlockWithStatus:(id)a0;
- (void)installProductWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)productWithCompletion:(id /* block */)a0;
- (void)productWithCustomOSBuildVersion:(id)a0 completion:(id /* block */)a1;
- (BOOL)queueUpdateForBootTimeInstallReturningError:(id *)a0;
- (void)startUpdateWithOptions:(id)a0 withHostWindow:(id)a1 completion:(id /* block */)a2;
- (void)updateIsAvailableWithCompletion:(id /* block */)a0;
- (void)updateIsAvailableWithCustomOSBuildVersion:(id)a0 completion:(id /* block */)a1;

@end
