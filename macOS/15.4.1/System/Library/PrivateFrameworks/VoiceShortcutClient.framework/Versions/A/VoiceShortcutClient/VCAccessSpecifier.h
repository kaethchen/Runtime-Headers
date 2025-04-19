@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSpringBoard;
- (BOOL)allowConnection;
- (BOOL)allowCustomShortcutRunning;
- (BOOL)allowDropletCreation;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowShortcutImport;
- (BOOL)allowStepwiseExecution;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowVariableInjection;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (id)bundleIdentifierFromTask;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)isRemovalService;
- (BOOL)isSettingsApp;

@end
