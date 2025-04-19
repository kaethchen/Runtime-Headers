@class NSString, NSUUID, AFBluetoothHeadGestureConfiguration;

@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;
@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, nonatomic) BOOL isAdvancedAppleAudioDevice;
@property (readonly, nonatomic) BOOL supportsInEarDetection;
@property (readonly, nonatomic) BOOL supportsVoiceTrigger;
@property (readonly, nonatomic) BOOL supportsJustSiri;
@property (readonly, nonatomic) BOOL supportsSpokenNotification;
@property (readonly, nonatomic) BOOL supportsListeningModeANC;
@property (readonly, nonatomic) BOOL supportsListeningModeTransparency;
@property (readonly, nonatomic) BOOL supportsListeningModeAutomatic;
@property (readonly, nonatomic) BOOL supportsConversationAwareness;
@property (readonly, nonatomic) BOOL supportsPersonalVolume;
@property (readonly, nonatomic) BOOL supportsAnnounceCall;
@property (readonly, copy, nonatomic) AFBluetoothHeadGestureConfiguration *headGestureConfiguration;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAddress:(id)a0 name:(id)a1 deviceUID:(id)a2 vendorID:(unsigned int)a3 productID:(unsigned int)a4 isAdvancedAppleAudioDevice:(BOOL)a5 supportsInEarDetection:(BOOL)a6 supportsVoiceTrigger:(BOOL)a7 supportsJustSiri:(BOOL)a8 supportsSpokenNotification:(BOOL)a9 supportsListeningModeANC:(BOOL)a10 supportsListeningModeTransparency:(BOOL)a11 supportsListeningModeAutomatic:(BOOL)a12 supportsConversationAwareness:(BOOL)a13 supportsPersonalVolume:(BOOL)a14 supportsAnnounceCall:(BOOL)a15 headGestureConfiguration:(id)a16;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
