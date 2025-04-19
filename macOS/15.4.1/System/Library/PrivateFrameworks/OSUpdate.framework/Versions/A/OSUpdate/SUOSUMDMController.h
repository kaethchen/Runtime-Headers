@class NSError, NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface SUOSUMDMController : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *installSemaphore;
@property (retain) NSError *installError;
@property (retain) NSArray *productKeys;

+ (id)hardwareModelString;

- (id)init;
- (void).cxx_destruct;
- (id)_availableUpdatesUsingAppleSoftwareLookupJson:(BOOL)a0 withLegacy:(BOOL)a1 WithError:(id *)a2;
- (id)availableExternalUpdates;
- (id)availableUpdatesUsingAppleSoftwareLookupJson:(BOOL)a0 WithError:(id *)a1;
- (id)availableUpdatesWithError:(id *)a0;
- (id)currentSoftwareUpdateServerConfiguration;
- (BOOL)initiateBackgroundScanWithError:(id *)a0;
- (BOOL)installMacOSUpdateWithProductMarketingVersion:(id)a0 withOptions:(id)a1 withError:(id *)a2;
- (BOOL)installUpdates:(id)a0 withOptions:(id)a1;
- (BOOL)installUpdates:(id)a0 withOptions:(id)a1 withError:(id *)a2;
- (void)scheduleUpdatesForLater;
- (id)updateStatusForKeys:(id)a0;

@end
