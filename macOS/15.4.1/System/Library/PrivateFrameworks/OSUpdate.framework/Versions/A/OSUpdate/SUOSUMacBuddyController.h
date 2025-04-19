@class NSString, SUOSUClient;
@protocol SUOSUMacBuddyDelegate;

@interface SUOSUMacBuddyController : NSObject <SUOSUClientDelegate>

@property (retain) SUOSUClient *client;
@property (weak) id<SUOSUMacBuddyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)updateFromFactoryVersionRequired:(BOOL *)a0 withError:(id *)a1;
+ (void)prepareRosettaUpdate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)availableUpdateProductsWithError:(id *)a0;
- (void)client:(id)a0 installDidBeginForUpdates:(id)a1 progress:(id)a2 mdmInitiated:(BOOL)a3;
- (void)client:(id)a0 installDidFinishSuccessfullyForUpdates:(id)a1 mdmInitiated:(BOOL)a2;
- (void)client:(id)a0 installDidFinishWithError:(id)a1 forUpdates:(id)a2 mdmInitiated:(BOOL)a3;
- (void)client:(id)a0 installDidFinishWithError:(id)a1 forUpdates:(id)a2 mdmInitiated:(BOOL)a3 installEvent:(id)a4;
- (void)client:(id)a0 installRequiresUserAction:(unsigned long long)a1 details:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)diskSpaceRequiredForProducts:(id)a0;
- (id)mandatoryUpdateEligibleProductsWithError:(id *)a0;
- (id)migrationEligibleProductsWithError:(id *)a0;
- (void)startDownloadingAndPreparingAvailableUpdatesInBackground;
- (BOOL)startInstallingMacbuddyUpdateWithBuildVersion:(id)a0 withOptions:(id)a1;
- (void)startInstallingMacbuddyUpdateWithProduct:(id)a0;
- (void)startInstallingMacbuddyUpdateWithProduct:(id)a0 withOptions:(id)a1;
- (BOOL)startInstallingMacbuddyUpdateWithProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)startInstallingMandatoryUpdateEligibleUpdatesWithProduct:(id)a0;

@end
