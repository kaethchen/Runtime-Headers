@class NSMutableDictionary, BitrateLimits, NSMutableSet, VCAudioTier;

@interface VCAudioTierPicker : NSObject {
    NSMutableDictionary *_tierTablesForRedNumPayloads;
    VCAudioTier *_fallbackTier;
    NSMutableDictionary *_tierTablePlist;
    NSMutableSet *_audioPayloads;
}

@property struct { unsigned char mode; struct __CFArray *supportedAudioPayloadConfigs; struct __CFArray *supportedPacketsPerBundle; struct __CFArray *supportedRedNumPayloads; unsigned int headerSize; BOOL usingCellular; BOOL isUseCaseWatchContinuity; unsigned int defaultMaxCap; BOOL alwaysOnAudioRedundancyEnabled; BOOL cellularAllowRedLowBitratesEnabled; BOOL wifiAllowRedLowBitratesEnabled; BOOL isIPv4; } config;
@property (retain, nonatomic) BitrateLimits *bitrateLimits;
@property (readonly) VCAudioTier *defaultTier;

+ (BOOL)arrayHasObject:(id)a0 withPayloadType:(int)a1;
+ (id)allPossibleCombinations:(id)a0 supportedPacketsPerBundle:(id)a1 redNumPayloads:(unsigned int)a2 headerSize:(unsigned int)a3 tierPickerMode:(unsigned char)a4 usingCellular:(BOOL)a5 useCaseWatchContinuity:(BOOL)a6;
+ (BOOL)isAlwaysOnRedAudioTier:(unsigned int)a0 redNumPayloads:(unsigned int)a1 usingCellular:(BOOL)a2;
+ (BOOL)isLowBitrateAudioTier:(unsigned int)a0;
+ (BOOL)isModeAudioOnly:(unsigned char)a0;
+ (BOOL)isModeAudioVideo:(unsigned char)a0;
+ (BOOL)isModeLowLatency:(unsigned char)a0;
+ (BOOL)isModePlistSupported:(unsigned char)a0;
+ (BOOL)isModeV2:(unsigned char)a0;
+ (BOOL)isU1ModeWithPlistSupport:(unsigned char)a0;
+ (BOOL)loadVCAudioTierFromTierTable:(id)a0 bitrate:(unsigned int)a1 redNumPayloads:(unsigned int)a2 outEntryArray:(id)a3;
+ (BOOL)loadVCAudioTierFromTierTable:(id)a0 config:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1 allowRedAtLowBitrate:(BOOL)a2 alwaysOnAudioRedundancyDisabled:(BOOL)a3 redNumPayloads:(unsigned int)a4 tierBitrate:(unsigned int)a5 outEntryArray:(id)a6;
+ (unsigned char)operatingModeToTierPickerMode:(int)a0 isLowLatency:(BOOL)a1 preferPlistForTierTable:(BOOL)a2;
+ (id)selectHighestQualityAudioTiers:(id)a0 forBitrateLimits:(id)a1 isHardLimit:(BOOL)a2;
+ (BOOL)shouldFilterTierForPayloadConfig:(id)a0 bitRate:(unsigned int)a1 packetsPerBundle:(unsigned int)a2 mode:(unsigned char)a3 redNumPayloads:(unsigned int)a4 cellular:(BOOL)a5;
+ (int)tierPickerModeToAVConferenceOperatingMode:(unsigned char)a0;
+ (BOOL)usePlistForAudioTierTableFromMode:(unsigned char)a0;
+ (id)valueForNetworkBitrate:(id)a0 networkBitrate:(unsigned int)a1;

- (void)dealloc;
- (id)initWithConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (id)configToString:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (BOOL)addEntryMatchingPayloadToAudioTierMap:(id)a0 config:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1 entry:(id)a2 bitrateTier:(id)a3 forcedPayload:(int)a4;
- (void)addPayloadFromTier:(id)a0;
- (void)addPayloadsFromGFTPayloadsArray:(id)a0;
- (void)addPayloadsFromGFTRedNumPayloadsDict:(id)a0 isDeviceClassWolf:(BOOL)a1;
- (void)addPayloadsFromU1IPVerDict:(id)a0 config:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1 mode:(id)a2;
- (void)addPayloadsFromU1RedNumPayloadsDict:(id)a0 config:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1 mode:(id)a2 isIPv4:(BOOL)a3 isCellular:(BOOL)a4;
- (unsigned long long)adjustedRedNumPayloadsForLowBitrateAudioTier:(id)a0 redNumPayloads:(unsigned long long)a1;
- (id)allActiveAudioTiers;
- (id)allPayloadsFromAllTierTables;
- (id)chooseMultiwayAudioTierForRedPayload:(unsigned long long)a0;
- (void)generateAudioPayloadsFromConfig:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a0;
- (id)generateAudioTiersDictFromPlistForBitrateLimits:(id)a0 tierPickerConfig:(const struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1 redNumPayloads:(unsigned int)a2;
- (id)loadAudioTiersFromPlist:(id)a0;
- (void)logTierPickerConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (void)printCreatedAudioTiers:(id)a0;
- (BOOL)reconfigureTierPicker:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)a0 usingCellular:(BOOL)a1;
- (BOOL)setupTierPickerForConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (id)tierForAudioBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withLegacyDuplication:(int)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;

@end
