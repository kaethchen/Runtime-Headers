@class NSString, NSArray, SMSystem_Daemon, SMUIDGIDTranslator, NSMutableDictionary, NSDictionary, NSURL, NSMutableSet, NSMutableArray, NSNumber;

@interface SMMigrationRequest : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *autoLoginUser;
@property (retain) SMUIDGIDTranslator *uidgidTranslator;
@property (retain) NSMutableSet *completedPaths;
@property unsigned long long state;
@property struct timeval { long long tv_sec; int tv_usec; } bootTime;
@property BOOL hasFatalError;
@property (retain) NSMutableArray *messages;
@property (retain) NSMutableDictionary *stepProgress;
@property (readonly) BOOL shouldSave;
@property unsigned long long type;
@property unsigned long long originatingApplication;
@property (readonly) NSNumber *bootTimeDisplay;
@property (retain) NSString *uuid;
@property (retain) SMSystem_Daemon *sourceSystem;
@property (retain) SMSystem_Daemon *targetSystem;
@property (retain) NSDictionary *sourceSystemLongTermIdentifier;
@property (retain) NSDictionary *targetSystemLongTermIdentifier;
@property BOOL osInstall;
@property BOOL disableSaving;
@property BOOL rebootOccurred;
@property (readonly) BOOL requiresReboot;
@property BOOL systemDefenseTriggered;
@property (retain) NSString *secureTokenUser;
@property (retain) NSString *secureTokenPassword;
@property BOOL activateFilevault;
@property (retain) NSDictionary *iCloudBag;
@property (retain) NSMutableArray *usersToTransfer;
@property BOOL shouldEnableFastUserSwitching;
@property (retain) NSMutableArray *fileGroupingPaths;
@property (retain) NSMutableDictionary *pathingInfo;
@property BOOL copiesNetworkSettings;
@property BOOL copiesTimeZoneSettings;
@property BOOL copiesMachineSettings;
@property BOOL copiesPrinterSettings;
@property (readonly) BOOL copiesApplicationSettings;
@property (retain) NSMutableDictionary *applicationsInfo;
@property BOOL copiesCustomFiles;
@property BOOL copiesHomeDirectories;
@property (retain) NSMutableDictionary *homeDirectoriesInfo;
@property (retain) NSMutableArray *otherDiskComponentDicts;
@property (retain) NSArray *incompatibleApps;
@property BOOL copiesUsers;
@property BOOL predeterminedUIDs;
@property BOOL shouldMigrateGuest;
@property BOOL guestWasOn;
@property (retain) NSMutableSet *faultFiles;
@property (readonly) BOOL didReboot;
@property (retain) NSMutableDictionary *overallMigrationInfo;
@property (readonly) BOOL hasResumableSystems;
@property (readonly) BOOL resumable;
@property (retain) NSDictionary *failureRequests;
@property (retain) NSURL *sandboxPath;
@property (nonatomic) BOOL isCombinedSoftwareUpdateAndMigration;

+ (id)keyPathsForValuesAffectingBootTimeDisplay;
+ (id)keyPathsForValuesAffectingOsInstall;
+ (void)performSecurityOperation:(id /* block */)a0;
+ (id)propertiesToMonitorForSave;
+ (void)restoreSecurityState:(id)a0;
+ (void)saveSecurityState:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)nextState;
- (id)dictionaryDescription;
- (id)initWithXPCDict:(id)a0;
- (void)addMessage:(id)a0;
- (void)addMessages:(id)a0;
- (void)sanitizeRequest;
- (void)_initCollections;
- (void)addFileGroupingPath:(unsigned long long)a0;
- (void)addUserToTransfer:(id)a0 excludedPaths:(id)a1 overwriteTargetName:(id)a2 additionalKeyValues:(id)a3;
- (void)advanceToNextState;
- (void)attachSaveMonitors;
- (void)copyCompletedForPath:(id)a0;
- (void)copyCompletedForPaths:(id)a0;
- (BOOL)copyWasCompletedForPath:(id)a0;
- (id)descriptionPostMigration;
- (void)detachSaveMonitors;
- (id)exportXPCDict;
- (void)getBootTime:(struct timeval { long long x0; int x1; } *)a0;
- (void)nudgeBootTime;
- (id)progressForStep:(id)a0;
- (void)removeUserToTransferWithOldShortName:(id)a0;
- (id)sanitizedUsers;
- (id)sanitizedUsersForKeys:(id)a0;
- (id)securitySanitizedUsers;
- (void)setProgress:(id)a0 forStep:(id)a1;
- (void)updateAutoLoginUser;
- (void)updateBootTime;
- (id)usersToReplaceOnDestinationSystem:(id)a0;

@end
