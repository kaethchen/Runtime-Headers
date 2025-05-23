@class NSString, NSMutableArray;
@protocol AXValidationReportingServices;

@interface AXValidationManager : NSObject

@property (nonatomic) BOOL shouldPerformValidationChecks;
@property (nonatomic) BOOL shouldLogToConsole;
@property (nonatomic) BOOL shouldCrashOnError;
@property (nonatomic) BOOL shouldReportToServer;
@property (nonatomic) unsigned long long numberOfValidations;
@property (nonatomic) unsigned long long numberOfCategories;
@property (nonatomic) unsigned long long numberOfValidationErrors;
@property (retain, nonatomic) NSMutableArray *consoleErrorMessages;
@property (nonatomic) unsigned long long numberOfValidationWarnings;
@property (retain, nonatomic) NSMutableArray *consoleWarningMessages;
@property (retain, nonatomic) id<AXValidationReportingServices> validationReportingServices;
@property (nonatomic) BOOL forceDoNotReport;
@property (copy, nonatomic) NSString *validationTargetName;
@property (copy, nonatomic) NSString *overrideProcessName;
@property (nonatomic, getter=isDebugBuild) BOOL debugBuild;
@property (nonatomic) BOOL installSafeCategoriesOffMainThread;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (void)_clearState;
- (BOOL)_client:(id)a0 validateStruct:(id)a1 hasSwiftField:(id)a2 withTypeString:(const char *)a3 isAnyClass:(BOOL)a4;
- (BOOL)_client:(id)a0 validateClass:(id)a1 hasClassMethod:(id)a2 withFullSignature:(const char *)a3 argList:(char *)a4;
- (id)_nameForMethod:(struct objc_method { } *)a0;
- (void)sendValidateExceptionForClass:(id)a0 errorMessage:(id)a1 overrideProcessName:(id)a2;
- (BOOL)_client:(id)a0 validateClass:(id)a1 hasMethod:(id)a2 methodType:(int)a3;
- (BOOL)_client:(id)a0 validateClass:(id)a1 hasMethod:(id)a2 methodType:(int)a3 returnType:(id)a4 arguments:(id)a5;
- (BOOL)_client:(id)a0 validateClass:(id)a1 hasSwiftField:(id)a2 withTypeString:(const char *)a3 isAnyClass:(BOOL)a4;
- (BOOL)_client:(id)a0 validateSwiftEnum:(id)a1 hasCase:(id)a2 withTypeString:(const char *)a3 isAnyClass:(BOOL)a4;
- (BOOL)_client:(id)a0 validateType:(id)a1 hasSwiftField:(id)a2 handleSwiftValidationProblems:(id)a3;
- (void)_generateWarningsForMethodType:(int)a0 onClass:(Class)a1 superclassMethods:(struct objc_method **)a2 numberOfSuperclassMethods:(unsigned int)a3;
- (void)_generateWarningsForPrefixedMethodNames:(id)a0 client:(id)a1 methodType:(int)a2 methodName:(id)a3 className:(id)a4;
- (void)_generateWarningsOnSafeCategoryClass:(Class)a0;
- (void)_iterateMethodsOfType:(int)a0 onClass:(Class)a1 block:(id /* block */)a2;
- (void)_printConsoleReport:(BOOL)a0 isDelayed:(BOOL)a1;
- (void)_printEncodedConsoleReportForValidationRunner:(BOOL)a0 isDelayed:(BOOL)a1;
- (BOOL)client:(id)a0 validateClass:(id)a1;
- (BOOL)client:(id)a0 validateClass:(id)a1 conformsToProtocol:(id)a2;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasClassMethod:(id)a2 withFullSignature:(const char *)a3;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasInstanceMethod:(id)a2 withFullSignature:(const char *)a3;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasInstanceMethod:(id)a2 withFullSignature:(const char *)a3 argList:(char *)a4;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasInstanceVariable:(id)a2 withType:(const char *)a3;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasProperty:(id)a2 customGetter:(id)a3 customSetter:(id)a4 withType:(const char *)a5;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasProperty:(id)a2 withType:(const char *)a3;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasSwiftField:(id)a2 withSwiftType:(const char *)a3;
- (BOOL)client:(id)a0 validateClass:(id)a1 hasSwiftFieldOfAnyClass:(id)a2;
- (BOOL)client:(id)a0 validateClass:(id)a1 isKindOfClass:(id)a2;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 conformsToProtocol:(id)a2;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 hasMethod:(id)a2 isInstanceMethod:(BOOL)a3 isRequired:(BOOL)a4;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 hasOptionalClassMethod:(id)a2;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 hasOptionalInstanceMethod:(id)a2;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 hasRequiredClassMethod:(id)a2;
- (BOOL)client:(id)a0 validateProtocol:(id)a1 hasRequiredInstanceMethod:(id)a2;
- (BOOL)client:(id)a0 validateSwiftEnum:(id)a1;
- (BOOL)client:(id)a0 validateSwiftEnum:(id)a1 hasCase:(id)a2;
- (BOOL)client:(id)a0 validateSwiftEnum:(id)a1 hasCase:(id)a2 withSwiftType:(const char *)a3;
- (BOOL)client:(id)a0 validateSwiftEnum:(id)a1 hasCaseOfAnyClass:(id)a2;
- (BOOL)client:(id)a0 validateSwiftStruct:(id)a1;
- (BOOL)client:(id)a0 validateSwiftStruct:(id)a1 hasSize:(long long)a2;
- (BOOL)client:(id)a0 validateSwiftStruct:(id)a1 hasSwiftField:(id)a2 withSwiftType:(const char *)a3;
- (BOOL)client:(id)a0 validateSwiftStruct:(id)a1 hasSwiftFieldOfAnyClass:(id)a2;
- (void)installSafeCategories:(id /* block */)a0 afterDelay:(double)a1 validationTargetName:(id)a2 overrideProcessName:(id)a3;
- (BOOL)installSafeCategory:(id)a0;
- (BOOL)installSafeCategory:(id)a0 canInteractWithTargetClass:(BOOL)a1;
- (BOOL)installSwiftDynamicReplacementUnit:(id)a0 inBundle:(id)a1 withPrecondition:(id /* block */)a2;
- (void)performValidations:(id /* block */)a0 withPreValidationHandler:(id /* block */)a1 postValidationHandler:(id /* block */)a2;
- (void)performValidations:(id /* block */)a0 withPreValidationHandler:(id /* block */)a1 postValidationHandler:(id /* block */)a2 safeCategoryInstallationHandler:(id /* block */)a3;
- (void)sendExceptionForInstallingSafeCategory:(id)a0 onTarget:(id)a1 overrideProcessName:(id)a2;
- (void)sendExceptionForSafeBlock:(id)a0 overrideProcessName:(id)a1;
- (void)sendExceptionForSafeCategoryOnWrongTarget:(id)a0 targetBundle:(id)a1 expectedBundle:(id)a2 overrideProcessName:(id)a3;
- (void)sendExceptionForSafeIVarKey:(id)a0 onTarget:(id)a1 overrideProcessName:(id)a2;
- (void)sendExceptionForSafeValueKey:(id)a0 onTarget:(id)a1 overrideProcessName:(id)a2;
- (void)sendFailedAssertionWithErrorMessage:(id)a0 overrideProcessName:(id)a1;
- (void)sendFailedTestCase:(id)a0 withTag:(id)a1 overrideProcessName:(id)a2;
- (void)sendGenericReport:(id)a0 withTag:(id)a1 overrideProcessName:(id)a2;
- (void)sendValidateExceptionForClass:(id)a0 conformsToProtocol:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForClass:(id)a0 hasClassMethod:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForClass:(id)a0 hasInstanceMethod:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForClass:(id)a0 hasInstanceVariable:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForClass:(id)a0 hasProperty:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForClass:(id)a0 isKindOfClass:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForProtocol:(id)a0 conformsToProtocol:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForProtocol:(id)a0 hasMethod:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidateExceptionForProtocol:(id)a0 hasProperty:(id)a1 errorMessage:(id)a2 overrideProcessName:(id)a3;
- (void)sendValidationSuccessForProcessName:(id)a0;
- (BOOL)validateClass:(id)a0;
- (BOOL)validateClass:(id)a0 conformsToProtocol:(id)a1;
- (BOOL)validateClass:(id)a0 hasClassMethod:(id)a1 withFullSignature:(const char *)a2;
- (BOOL)validateClass:(id)a0 hasInstanceMethod:(id)a1 withFullSignature:(const char *)a2;
- (BOOL)validateClass:(id)a0 hasInstanceVariable:(id)a1 withType:(const char *)a2;
- (BOOL)validateClass:(id)a0 hasProperty:(id)a1 customGetter:(id)a2 customSetter:(id)a3 withType:(const char *)a4;
- (BOOL)validateClass:(id)a0 hasProperty:(id)a1 withType:(const char *)a2;
- (BOOL)validateClass:(id)a0 hasSwiftField:(id)a1 withSwiftType:(const char *)a2;
- (BOOL)validateClass:(id)a0 hasSwiftFieldOfAnyClass:(id)a1;
- (BOOL)validateClass:(id)a0 isKindOfClass:(id)a1;
- (BOOL)validateProtocol:(id)a0 conformsToProtocol:(id)a1;
- (BOOL)validateProtocol:(id)a0 hasMethod:(id)a1 isInstanceMethod:(BOOL)a2 isRequired:(BOOL)a3;
- (BOOL)validateProtocol:(id)a0 hasOptionalClassMethod:(id)a1;
- (BOOL)validateProtocol:(id)a0 hasOptionalInstanceMethod:(id)a1;
- (BOOL)validateProtocol:(id)a0 hasRequiredClassMethod:(id)a1;
- (BOOL)validateProtocol:(id)a0 hasRequiredInstanceMethod:(id)a1;
- (BOOL)validateSwiftEnum:(id)a0;
- (BOOL)validateSwiftEnum:(id)a0 hasCase:(id)a1;
- (BOOL)validateSwiftEnum:(id)a0 hasCase:(id)a1 withSwiftType:(const char *)a2;
- (BOOL)validateSwiftEnum:(id)a0 hasCaseOfAnyClass:(id)a1;
- (BOOL)validateSwiftStruct:(id)a0;
- (BOOL)validateSwiftStruct:(id)a0 hasSize:(long long)a1;
- (BOOL)validateSwiftStruct:(id)a0 hasSwiftField:(id)a1 withSwiftType:(const char *)a2;
- (BOOL)validateSwiftStruct:(id)a0 hasSwiftFieldOfAnyClass:(id)a1;

@end
