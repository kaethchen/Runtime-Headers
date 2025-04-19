@class NSString, NSArray, SKAPFSDisk, NSURL, NSMutableDictionary;

@interface OSITemplateMigrationOptions : OSInstallOptions

@property (retain) NSString *migrateRequiringBuild;
@property BOOL migrateEvenWithSameBuild;
@property BOOL disableRemounting;
@property BOOL disableStateTracking;
@property (retain) SKAPFSDisk *systemVolume;
@property (retain) SKAPFSDisk *dataVolume;
@property (retain) SKAPFSDisk *updateVolume;
@property (retain) NSURL *cookieFilePath;
@property (retain) NSURL *bootPlistFilePath;
@property (retain) NSArray *postMigrationInstallPaths;
@property (retain) NSString *seedingProgram;
@property (retain) NSString *volumeUUIDToErase;
@property (retain) NSMutableDictionary *cookieData;
@property unsigned long long requiredTasks;
@property long long exitStyle;
@property BOOL systemWasArchived;
@property BOOL didRequestEraseInstall;
@property BOOL isCombinedSoftwareUpdateAndMigration;
@property BOOL nonTemplateMigration;

+ (id)currentlySetOptions;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryRepresentation;
- (void)setDictionaryRepresentation:(id)a0;
- (void)endTask;
- (void)beginTask;
- (void)commitCookieData;
- (void)findPrebootAndLoadCookie;
- (id)findVolumeWithRole:(id)a0;
- (BOOL)getNextTask:(unsigned long long *)a0 recovery:(BOOL *)a1;
- (id)initWithSystemVolume:(id)a0 andDataVolume:(id)a1;
- (void)makeUpdateVolumeAvailable;

@end
