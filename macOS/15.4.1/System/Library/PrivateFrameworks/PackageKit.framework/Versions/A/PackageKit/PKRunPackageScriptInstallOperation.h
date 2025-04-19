@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation {
    NSString *_scriptType;
    PKPackageSpecifier *_currentPackageSpecifier;
    unsigned int _original_bootstrap_port;
    unsigned int _original_security_session_port;
}

+ (id)_sanitizeEnvironment:(id)a0;

- (void)dealloc;
- (id)description;
- (int)installState;
- (void)main;
- (void)_restoreContext;
- (BOOL)_runPackageScript:(id)a0 packageSpecifier:(id)a1 component:(id)a2 scriptName:(id)a3 error:(id *)a4;
- (id)_scriptTaskEnvironmentForPackage:(id)a0 destination:(id)a1 scriptName:(id)a2;
- (BOOL)_shouldSkipScriptForPackageSpecifier:(id)a0;
- (void)_switchToUserContext;
- (id)currentPackageSpecifier;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
