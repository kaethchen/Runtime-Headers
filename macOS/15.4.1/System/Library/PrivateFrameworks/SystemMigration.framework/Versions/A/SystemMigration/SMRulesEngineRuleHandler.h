@class NSDictionary, SMRulesEngineDBClient, NSArray;

@interface SMRulesEngineRuleHandler : NSObject

@property (retain, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (retain, nonatomic) NSDictionary *longTermDestinationSystemIdentifier;
@property (retain) SMRulesEngineDBClient *rulesEngineDBClient;
@property (retain) NSArray *generatedLegacyServerRules;

- (void).cxx_destruct;
- (id)sourceVersion;
- (id)_source;
- (id)initWithSource:(id)a0 destination:(id)a1;
- (BOOL)isApplicableInCurrentBootStage:(id)a0;
- (BOOL)isDeferredCopy:(id)a0;
- (BOOL)isPathFirmlink:(id)a0;
- (id)_destination;
- (unsigned long long)_migrationRequestType;
- (BOOL)clearFirmlinkPathContents:(id)a0;
- (BOOL)copyFirmlinkContents:(id)a0 newPath:(id)a1;
- (BOOL)executeCopyRule:(id)a0;
- (void)executeRule:(id)a0;
- (void)executeToolAtPath:(id)a0 withArguments:(id)a1 andCopyPath:(id)a2 usingDeferral:(BOOL)a3 allowSIP:(BOOL)a4;
- (void)executeToolPathRule:(id)a0;
- (void)generateLegacyServerRulesFromPatherForUnreachablePaths:(id)a0;
- (id)generateTargetPath:(id)a0;
- (BOOL)isApplicableRuleForCurrentMigrationType:(id)a0;
- (BOOL)isPathingRuleApplicableForContext:(id)a0;
- (BOOL)isRuleApplicable:(id)a0;
- (BOOL)isRuleApplicableForContext:(id)a0;
- (BOOL)isRuleApplicableForPather:(id)a0;
- (BOOL)isSkipLegacyRuleInLegacy:(id)a0;
- (BOOL)isSourceLessThanMaximumVersionAllowed:(id)a0;
- (BOOL)isSourceMoreThanMinimumVersionAllowed:(id)a0;
- (BOOL)isSourcePathAppleShippedDefault:(id)a0;
- (BOOL)isSourcePathPresentInSource:(id)a0;
- (void)processRuleGroup:(long long)a0;
- (void)renameConflictingPathOnTarget:(id)a0 fullTargetPath:(id)a1 targetPath:(id)a2 deferredCopy:(BOOL)a3;
- (id)stringBySubstitutingEnvironmentVariablesInString:(id)a0 environment:(id)a1;

@end
