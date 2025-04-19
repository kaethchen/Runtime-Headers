@class PKInstallRequest, NSString, PKPackageSourceManager, NSFileHandle, IFRunnerProxy, NSMutableArray;

@interface IFPKInstallElement : IFInstallQueueElement {
    NSMutableArray *_packageReps;
    NSMutableArray *_pkPackageSpecifiers;
    NSString *_destinationPath;
    NSString *_displayName;
    NSString *_displayVersion;
    NSString *_sandboxPath;
    PKPackageSourceManager *_sourceMgr;
    NSString *_scriptTargetVolume;
    BOOL _osInstall;
    BOOL _isFNI;
    int _restartAction;
    int _minTrust;
    PKInstallRequest *_request;
    double _totalEstimatedTime;
    NSFileHandle *_translocationFileHandle;
}

@property BOOL isExecuting;
@property BOOL userConsentedInstall;
@property BOOL requiresRosettaTranslation;
@property (retain) IFRunnerProxy *runnerProxy;
@property int authorizationType;

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (void)installClientDidFinish:(id)a0;
- (void)installClientDidBegin:(id)a0;
- (id)_determinePrefixPathForPackage:(id)a0;
- (void)_resolvePackagesUsingSourceManager;
- (id)addPackageRep:(id)a0;
- (double)estimatedTotalTime;
- (BOOL)hasInstallWarning:(id *)a0;
- (id)initWithDestinationPath:(id)a0 displayName:(id)a1 displayVersion:(id)a2 sourceManager:(id)a3 sandboxPath:(id)a4 installingOS:(BOOL)a5 isFNI:(BOOL)a6 minTrustLevel:(int)a7 restartAction:(int)a8 translocationFileHandle:(id)a9;
- (id)packageReps;
- (id)preparedInstallRequest;
- (void)setExternalRootMountPoint:(id)a0;
- (void)setScriptTargetVolume:(id)a0;

@end
