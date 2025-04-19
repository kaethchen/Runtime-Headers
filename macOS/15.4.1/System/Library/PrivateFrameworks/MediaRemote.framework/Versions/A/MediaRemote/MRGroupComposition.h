@class NSString;

@interface MRGroupComposition : NSObject

@property (retain, nonatomic) NSString *soloProductIdentifier;
@property (retain, nonatomic) NSString *soloModelIdentifier;
@property (nonatomic) unsigned long long atvCount;
@property (nonatomic) unsigned long long homePodCount;
@property (nonatomic) unsigned long long homePodMiniCount;
@property (nonatomic) unsigned long long headphoneCount;
@property (nonatomic) unsigned long long bluetoothSpeakerCount;
@property (nonatomic) unsigned long long setTopCount;
@property (nonatomic) unsigned long long tvStickCount;
@property (nonatomic) unsigned long long tvCount;
@property (nonatomic) unsigned long long macCount;
@property (nonatomic) unsigned long long hifiCount;
@property (nonatomic) unsigned long long lofiCount;
@property (nonatomic) unsigned long long builtInCount;
@property (nonatomic) unsigned long long legacyBeatsCount;
@property (nonatomic) unsigned long long iPhoneCount;
@property (nonatomic) unsigned long long visionCount;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic) unsigned long long carplayCount;
@property (nonatomic) unsigned long long vehicleCount;
@property (nonatomic) unsigned long long hearingDeviceCount;
@property (nonatomic) unsigned long long earPodCount;
@property (nonatomic) unsigned long long unknownCount;
@property (readonly, nonatomic) unsigned long long totalCount;

+ (id)homePodHomeTheaterComposition;
+ (id)homePodHomeTheaterCompositionWithHomePodModelIdentifier:(id)a0;
+ (id)homePodMiniHomeTheaterComposition;
+ (id)homePodMiniStereoPairComposition;
+ (id)homePodStereoPairComposition;
+ (id)homePodStereoPairCompositionWithModelIdentifier:(id)a0;
+ (id)multiBuiltInComposition;
+ (id)unknownComposition;

- (id)description;
- (void).cxx_destruct;
- (void)addHomePodWithModelIdentifier:(id)a0;

@end
