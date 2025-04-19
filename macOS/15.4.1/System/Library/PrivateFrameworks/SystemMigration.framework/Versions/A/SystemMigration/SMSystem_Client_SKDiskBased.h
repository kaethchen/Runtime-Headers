@class NSString;

@interface SMSystem_Client_SKDiskBased : SMSystem_Client

@property BOOL isPasswordLocked;
@property BOOL isEncrypted;
@property BOOL isDefaultEffaceable;
@property BOOL isFilevault;
@property BOOL systemAndDataMounted;
@property (retain) NSString *protocol;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)guiInterestedKeys;
+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingUiRank;
+ (id)keyPathsForValuesAffectingVolumeIconAccesibilityLabel;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (BOOL)availableAction;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;
- (unsigned long long)uiRank;
- (BOOL)validateFDEPassword:(id)a0;
- (id)volumeIconAccesibilityLabel;

@end
