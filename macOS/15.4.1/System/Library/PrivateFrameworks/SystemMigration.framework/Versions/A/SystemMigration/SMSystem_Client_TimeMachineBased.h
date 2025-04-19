@class NSString, NSImage, NSDate, NSMutableArray;

@interface SMSystem_Client_TimeMachineBased : SMSystem_Client

@property BOOL isLiteBackup;
@property (retain) NSString *storageVolume;
@property (retain) NSDate *backupCompletedDate;
@property BOOL isLatestBackup;
@property (retain) NSString *machineName;
@property (retain) NSMutableArray *backups;
@property (retain) NSImage *volumeIcon;

+ (id)guiInterestedKeys;
+ (id)guiInterestedOneTimeKeys;
+ (id)guiMonitorKeys;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (id)displayIcon;
- (id)childSystems;
- (long long)defaultUIRank;
- (id)volumeIconAccesibilityLabel;

@end
