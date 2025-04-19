@class SCRMIGHelper;

@interface SCRArgumentParser : SCRCArgumentParser {
    BOOL _hasReceivedMessageFromLaunchdStart;
    BOOL _startedByLaunchd;
    BOOL _isKeyboardHelpOnlyEnabled;
    BOOL _shouldSkipSplash;
    BOOL _isQuickStarted;
    BOOL _isAutomaticStartAfterLogin;
    BOOL _bailAsSoonAsPossible;
    BOOL _isQuickStartRunning;
    BOOL _shouldShortCircuitSpeechSynthesizer;
    SCRMIGHelper *_migHelper;
}

+ (id)processIdentifier;
+ (id)versionString;

- (int)run;
- (void).cxx_destruct;
- (void)stop;
- (unsigned long long)_sessionID;
- (id)initWithArgc:(int)a0 argv:(const char **)a1;
- (void)stopDueToSigTerm;
- (void)_setSessionID:(unsigned long long)a0;
- (id)_setQuickStart:(id)a0;
- (id)_setSkipSplash:(id)a0;
- (BOOL)_checkAndRunSplash;
- (void)_handleCommand:(id)a0 synchronizationHandler:(id /* block */)a1;
- (void)_initializeStartupOptions:(int)a0;
- (BOOL)_isRunningAsRoot;
- (unsigned long long)_securitySessionID;
- (id)_setAutomaticStartAfterLogin:(id)a0;
- (id)_setKeyboardHelp:(id)a0;
- (id)_setLogMask:(id)a0;
- (id)_setStartedByLaunchd:(id)a0;
- (id)_setTargetApplications:(id)a0;
- (id)_setTestTargetApplicationPIDs:(id)a0;
- (BOOL)_shouldStartVoiceOver;
- (void)_stopAndPlayMessage:(BOOL)a0;
- (void)_tearDownMachServicesWithReturnValue:(int)a0;
- (void)setCommandList:(id)a0 isAllowList:(BOOL)a1;
- (void)setHasReceivedMessageFromLaunchdStart:(BOOL)a0;
- (BOOL)startedByLaunchd;
- (BOOL)wasLastShutdownPlanned;

@end
