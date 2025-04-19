@class NSURL, NSMutableArray;

@interface DUSession : NSObject {
    BOOL _isOpen;
    NSMutableArray *_restartRecommendationReasons;
    unsigned long long _freeSpaceRequired;
    NSURL *_targetURL;
    BOOL _hasDefaultTargetURL;
    BOOL _targetsBaseSystem;
}

@property (nonatomic, setter=_setVerbosity:) long long _verbosity;
@property (nonatomic, setter=_setPerformRootUserCheck:) BOOL _performRootUserCheck;
@property (nonatomic, setter=_setPerformEntitlementCheck:) BOOL _performEntitlementCheck;
@property (copy, nonatomic, setter=_setDarwinupURL:) NSURL *_darwinupURL;
@property (nonatomic) BOOL enableHelpfulAutomation;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)closeAndReturnError:(id *)a0;
- (id)allInstalledRootsAndReturnError:(id *)a0;
- (BOOL)openAndReturnError:(id *)a0;
- (id)initForCurrentBaseSystemWithEstimatedFreeSpaceRequired:(unsigned long long)a0;
- (id)initForDirectoryAtURL:(id)a0;
- (id)initForDiskImageAtURL:(id)a0 estimatedFreeSpaceRequired:(unsigned long long)a1;
- (id)installRootAtURL:(id)a0 error:(id *)a1;
- (id)renameRoot:(id)a0 to:(id)a1 error:(id *)a2;
- (id)renameRootWithUniqueIdentifier:(id)a0 to:(id)a1 error:(id *)a2;
- (id)uninstallAllRootsAndReturnError:(id *)a0;
- (id)uninstallRoot:(id)a0 error:(id *)a1;
- (id)uninstallRootWithUniqueIdentifier:(id)a0 error:(id *)a1;

@end
