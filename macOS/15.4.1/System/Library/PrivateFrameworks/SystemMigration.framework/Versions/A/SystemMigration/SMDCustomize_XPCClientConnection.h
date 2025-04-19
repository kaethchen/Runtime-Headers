@class SMPaths, SMWindowsAnalyzer;

@interface SMDCustomize_XPCClientConnection : SMDXPCClientConnection <SMDPCustomizeProtocol, SMPathsPreliminaryUserSizeCallback, SMPathsPreliminaryPathGroupSizeCallback, SMPathsProgressInfoDelegateProtocol, SMWindowsAnalyzerPreliminaryComponentSizeCallback, SMWindowsAnalyzerPreliminaryCustomPathSizeCallback>

@property (retain) SMPaths *pather;
@property (retain) SMWindowsAnalyzer *windowsAnalyzer;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void).cxx_destruct;
- (void)cancelSizingForSystemID:(id)a0;
- (void)hasCustomPathsForSourceSystem:(id)a0 andDestinationSystem:(id)a1 reply:(id /* block */)a2;
- (void)informationForBundlesAtPaths:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 reply:(id /* block */)a3;
- (void)initiateCustomizationOfSystem:(id)a0;
- (void)pathingProgressFormatKey:(id)a0 arguments:(id)a1;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (void)preliminarySize:(unsigned long long)a0 forComponent:(id)a1;
- (void)preliminarySize:(unsigned long long)a0 forUserHome:(id)a1;
- (void)preliminarySizeForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2;
- (void)sizeAllUsersForSystem:(id)a0 includingVaultUsers:(BOOL)a1;
- (void)sizeForComponent:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 reply:(id /* block */)a3;
- (void)sizeForCustomPathType:(unsigned long long)a0 user:(id)a1 onSourceSystem:(id)a2 andDestinationSystem:(id)a3 reply:(id /* block */)a4;
- (void)sizeForPathGroup:(unsigned long long)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 reply:(id /* block */)a3;
- (void)submitMigrationRequest:(id)a0;

@end
