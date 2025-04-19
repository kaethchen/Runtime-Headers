@class NSString, NSArray, SMSystem, NSImage, NSURL, NSNumber;

@interface SMUser : NSObject {
    NSString *_shortNameForImport;
    NSString *_longNameForImport;
}

@property unsigned int uid;
@property unsigned int gid;
@property (retain) NSString *UUID;
@property (readonly) SMSystem *sourceSystem;
@property BOOL dontNeedToCopyUserHome;
@property BOOL homeDirIsRedirected;
@property BOOL homeDirToBeCopiedByMigration;
@property BOOL homeDirToBeSymlinkedByMigration;
@property (retain) NSString *name;
@property (retain) NSString *iCloudName;
@property (retain) NSArray *iCloudNames;
@property (retain) NSArray *iCloudIdentifiers;
@property (retain) NSString *fullName;
@property (retain) NSImage *accountPicture;
@property (readonly) NSURL *relativeHomeDir;
@property BOOL fdeSigned;
@property BOOL filevault;
@property BOOL portableHomeUser;
@property (readonly) BOOL isAdminUser;
@property (readonly) BOOL isRoleUser;
@property (readonly) BOOL isRoot;
@property (readonly) NSNumber *homeDirSize;
@property BOOL needsAttention;
@property BOOL allowOverwriteOfConflictedShortName;
@property BOOL shouldOverwriteConflictedShortName;
@property BOOL shouldPreserveConflictedHomeDirectory;
@property (readonly) unsigned long long userConflictState;
@property unsigned long long userConflictResolutionOptions;
@property BOOL isConflictingWithAnAdmin;
@property (retain) NSString *shortNameForImport;
@property (readonly) BOOL shortNameHasConflict;
@property (readonly) BOOL shortNameHasConflictWithOtherShortName;
@property (retain) NSString *longNameForImport;
@property (readonly) BOOL longNameHasConflict;

+ (id)keyPathsForValuesAffectingShouldPreserveConflictedHomeDirectory;
+ (id)keyPathsForValuesAffectingAllowOverwriteOfConflictedShortName;
+ (id)keyPathsForValuesAffectingLongNameHasConflict;
+ (id)keyPathsForValuesAffectingShortNameHasConflict;
+ (id)keyPathsForValuesAffectingShouldOverwriteConflictedShortName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (id)sizeForSubPath:(id)a0;
- (void)resetNamesForImport;
- (id)sanitizedLoginStringForComparison:(id)a0;
- (id)stringForUserConflictState:(unsigned long long)a0;
- (void)updateConflictStateForSystem:(id)a0 consideringOtherUsers:(id)a1;

@end
