@class NSString, NSDictionary;

@interface CoreCECDevice : CoreRCDevice

@property (readonly, nonatomic) NSString *analyticsKey;
@property (readonly, nonatomic) NSString *analyticsDescription;
@property (nonatomic) unsigned char logicalAddress;
@property (nonatomic) unsigned short physicalAddress;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long cecVersion;
@property (nonatomic) unsigned long long vendorID;
@property (nonatomic) unsigned long long powerStatus;
@property (nonatomic) unsigned long long deckStatus;
@property (nonatomic) unsigned long long allDeviceTypes;
@property (nonatomic) unsigned long long deviceFeatures;
@property (nonatomic) unsigned long long knownDeviceFeatures;
@property (copy, nonatomic) NSDictionary *rcProfile;
@property (nonatomic) BOOL audioReturnChannelControlEnabled;
@property (nonatomic) unsigned long long audioVolumeStatus;
@property (nonatomic) BOOL audioMuteStatus;
@property (copy, nonatomic) NSDictionary *audioFormats;
@property (nonatomic) unsigned long long audioFormatsCount;
@property (nonatomic) BOOL isActiveSource;
@property (readonly, nonatomic) BOOL isUnregistered;
@property (readonly, nonatomic) BOOL systemAudioControlEnabled;
@property (readonly, nonatomic) BOOL isCEC2Device;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithDevice:(id)a0;
- (void)audioStatusReceived:(unsigned long long)a0 muteStatus:(BOOL)a1;
- (id)mergeProperties;
- (void)requestSystemAudioModeStatusChangeTo:(unsigned long long)a0 didFinishWithResult:(BOOL)a1 error:(id)a2;
- (BOOL)deckControlSetDeckStatus:(unsigned long long)a0 error:(id *)a1;
- (BOOL)refreshDevices:(id *)a0;
- (BOOL)setSupportedAudioFormats:(id)a0 error:(id *)a1;
- (void)deckControlCommandHasBeenReceived:(unsigned long long)a0 fromDevice:(id)a1;
- (BOOL)deckControlCommandWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (void)deckControlPlayHasBeenReceived:(unsigned long long)a0 fromDevice:(id)a1;
- (BOOL)deckControlPlayWithMode:(unsigned long long)a0 target:(id)a1 error:(id *)a2;
- (BOOL)deckControlRefreshStatus:(id)a0 requestType:(unsigned long long)a1 error:(id *)a2;
- (void)deckControlStatusHasBeenUpdated:(unsigned long long)a0 fromDevice:(id)a1;
- (unsigned long long)defaultKnownDeviceFeaturesMaskForCECVersion:(unsigned long long)a0;
- (void)didChangePowerStatus:(unsigned long long)a0;
- (void)featureAbort:(id)a0;
- (unsigned long long)featureSupportStatus:(unsigned long long)a0;
- (id)initWithBus:(id)a0 local:(BOOL)a1;
- (id)initWithBus:(id)a0 local:(BOOL)a1 logicalAddress:(unsigned char)a2 physicalAddress:(unsigned short)a3 attributes:(id)a4;
- (id)initWithBus:(id)a0 local:(BOOL)a1 logicalAddress:(unsigned char)a2 physicalAddress:(unsigned short)a3 deviceType:(unsigned long long)a4;
- (BOOL)isCEC2Device;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)a0 error:(id *)a1;
- (void)notifyDelegateActiveSourceStatusHasChanged;
- (void)notifyDelegateAudioStatusReceived:(unsigned long long)a0 muteStatus:(BOOL)a1;
- (void)notifyDelegateDeckControlCommandHasBeenReceived:(id)a0 command:(unsigned long long)a1;
- (void)notifyDelegateDeckControlPlayHasBeenReceived:(id)a0 playMode:(unsigned long long)a1;
- (void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)a0 deckInfo:(unsigned long long)a1;
- (void)notifyDelegateFeatureAbort:(id)a0;
- (void)notifyDelegateReceivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 fromDevice:(id)a1;
- (void)notifyDelegateReceivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)a0 fromDevice:(id)a1;
- (void)notifyDelegateRequestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 didFinishWithResult:(BOOL)a1 error:(id)a2;
- (void)notifyDelegateRequestSystemAudioModeStatusChangeTo:(unsigned long long)a0 didFinishWithResult:(BOOL)a1 error:(id)a2;
- (void)notifyDelegateShouldAssertActiveSource;
- (void)notifyDelegateStandbyRequestHasBeenReceived:(id)a0;
- (BOOL)performStandbyWithTargetDevice:(id)a0 error:(id *)a1;
- (void)receivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 fromDevice:(id)a1;
- (void)receivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)a0 fromDevice:(id)a1;
- (BOOL)refreshProperties:(id)a0 ofDevice:(id)a1 error:(id *)a2;
- (BOOL)refreshPropertiesOfDevice:(id)a0 error:(id *)a1;
- (void)removeFromBus;
- (BOOL)requestActiveSource:(id *)a0;
- (void)requestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 didFinishWithResult:(BOOL)a1 error:(id)a2;
- (BOOL)requestAudioReturnChannelStatusChangeTo:(unsigned long long)a0 error:(id *)a1;
- (BOOL)requestAudioStatus:(id *)a0;
- (BOOL)requestSystemAudioModeStatusChangeTo:(unsigned long long)a0 error:(id *)a1;
- (BOOL)resignActiveSource:(id *)a0;
- (void)sendAnalyticsForErrorString:(id)a0 vendorID:(unsigned short)a1 productID:(unsigned short)a2 serialNumber:(unsigned int)a3 week:(unsigned char)a4 year:(unsigned char)a5 monitorName:(id)a6;
- (void)sendLogicalAddressErrorAnalyticsForMessage:(const char *)a0;
- (BOOL)setAudioMuteStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)setAudioReturnChannelControlEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)setAudioVolumeStatus:(unsigned long long)a0 error:(id *)a1;
- (void)setFeature:(unsigned long long)a0 supportStatus:(unsigned long long)a1;
- (BOOL)setPowerStatus:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setSupportedAudioFormats:(const struct CoreCECAudioFormat { unsigned char x0[3]; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setSystemAudioControlEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)setTrackAudioStatusEnabled:(BOOL)a0 pressTimeout:(long long)a1 pollInterval:(long long)a2 error:(id *)a3;
- (void)shouldAssertActiveSource;
- (void)standbyRequestHasBeenReceived:(id)a0;
- (BOOL)systemAudioModeRequest:(unsigned long long)a0 error:(id *)a1;
- (void)willChangePowerStatus:(unsigned long long)a0;

@end
