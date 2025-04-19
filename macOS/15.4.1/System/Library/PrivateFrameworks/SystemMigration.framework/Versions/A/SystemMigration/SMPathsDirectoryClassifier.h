@class SMPathStats, NSArray, NSDictionary, NSURL, SMPaths, NSMutableSet;

@interface SMPathsDirectoryClassifier : NSObject {
    SMPathStats *statsForSystemFiles;
    SMPathStats *statsForPrinterFiles;
    SMPathStats *statsForLibraryFiles;
    SMPathStats *statsForSlashFiles;
    SMPathStats *statsForApplicationsFiles;
    SMPathStats *statsForLibraryPreferencesFiles;
    SMPathStats *statsForLibraryPreferencesDirectoryServiceFiles;
    SMPathStats *statsForSystemLibraryPrivateFrameworksFiles;
    SMPathStats *statsForServerFiles;
    SMPathStats *statsForLegacyServerFiles;
    SMPathStats *statsForIncompatibleApps;
    SMPathStats *statsForActiveUserFiles;
}

@property (retain, nonatomic) NSURL *directory;
@property (weak, nonatomic) SMPaths *pather;
@property (retain, nonatomic) NSMutableSet *systemFiles;
@property (retain, nonatomic) NSMutableSet *printerFiles;
@property (retain, nonatomic) NSMutableSet *libraryFiles;
@property (retain, nonatomic) NSMutableSet *slashFiles;
@property (retain, nonatomic) NSMutableSet *applicationsFiles;
@property (retain, nonatomic) NSMutableSet *libraryPreferencesFiles;
@property (retain, nonatomic) NSMutableSet *libraryPreferencesDirectoryServiceFiles;
@property (retain, nonatomic) NSMutableSet *systemLibraryPrivateFrameworksFiles;
@property (retain, nonatomic) NSMutableSet *serverFiles;
@property (retain, nonatomic) NSMutableSet *legacyServerFiles;
@property (retain, nonatomic) NSMutableSet *incompatibleAppsFiles;
@property (retain, nonatomic) NSMutableSet *skippedBundles;
@property (nonatomic) BOOL containsConfMigratorClaimedFiles;
@property (nonatomic) BOOL containsDoNotScanPaths;
@property (retain, nonatomic) NSDictionary *prefixToGrouping;
@property (retain, nonatomic) NSArray *sortedPrefixes;
@property (weak, nonatomic) NSMutableSet *activeUserFileClassification;
@property (nonatomic) BOOL doNotCoalesce;
@property (nonatomic) BOOL statistical;

- (void).cxx_destruct;
- (void)absorbChildClassifier:(id)a0;
- (void)addBundle:(id)a0 atLocation:(id)a1 withStats:(id)a2 isPlatformBinary:(BOOL)a3;
- (void)addFile:(id)a0 withStats:(id)a1;
- (void)addIncompatibleAppsFile:(id)a0 withStats:(id)a1;
- (void)addPrinterFile:(id)a0 withStats:(id)a1;
- (void)addSystemFile:(id)a0 withStats:(id)a1;
- (void)addUserFile:(id)a0 withStats:(id)a1;
- (BOOL)containsOnlyLegacyServerFiles;
- (BOOL)containsOnlyPrinterFiles;
- (BOOL)containsOnlySystemFiles;
- (BOOL)containsOnlyUserFiles;
- (id)initForPather:(id)a0 inDirectory:(id)a1;
- (void)noteDoNotScanPath;
- (void)setupActiveClassification;
- (id)statsForGrouping:(id)a0;
- (unsigned long long)totalUserFiles;

@end
