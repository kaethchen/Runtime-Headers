@class NSData, NSString, TUSandboxExtendedURL, NSURL, NSSet, NSArray, NSOrderedSet, NSObject;
@protocol OS_tcc_identity;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSSet *supportedHandleTypes;
@property (copy, nonatomic) NSArray *emergencyHandles;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles;
@property (copy, nonatomic) NSArray *handoffIdentifiers;
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities;
@property (retain, nonatomic) NSURL *ringtoneSoundURL;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL;
@property (retain, nonatomic) NSURL *originalRingtoneSoundURL;
@property (copy, nonatomic) NSData *iconTemplateImageData;
@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic) BOOL supportsAudioOnly;
@property (nonatomic) BOOL supportsAudioAndVideo;
@property (nonatomic) BOOL supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail;
@property (nonatomic) BOOL supportsRecents;
@property (nonatomic) BOOL supportsCurrentPlatform;
@property (nonatomic) BOOL supportsRinging;
@property (nonatomic) BOOL supportsDynamicSystemUI;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic, getter=isTelephonyProvider) BOOL telephonyProvider;
@property (readonly, nonatomic, getter=isFaceTimeProvider) BOOL faceTimeProvider;
@property (readonly, nonatomic, getter=isSuperboxProvider) BOOL superboxProvider;
@property (readonly, copy, nonatomic) TUCallProvider *base;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)displayAppBundleIdentifier;
- (BOOL)hasRestrictionsInRetailEnvironment;
- (id)inCallUIBundleIdentifier;
- (BOOL)isEqualToCallProvider:(id)a0;
- (BOOL)isSystemProvider;
- (id)senderIdentities;
- (id)senderIdentityForAccountUUID:(id)a0;
- (id)senderIdentityForHandle:(id)a0;
- (id)senderIdentityForUUID:(id)a0;
- (void)setSenderIdentities:(id)a0;
- (BOOL)supportsGuestModeBroadcastToDeviceType:(long long)a0;
- (BOOL)supportsHandleType:(long long)a0;

@end
