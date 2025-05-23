@class NSString, NSArray, NSSet, NSOrderedSet, NSData, CXSandboxExtendedURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *emergencyHandles;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles;
@property (copy, nonatomic) NSArray *handoffIdentifiers;
@property (copy, nonatomic) NSSet *senderIdentities;
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities;
@property (copy, nonatomic) CXSandboxExtendedURL *ringtoneSoundURL;
@property (nonatomic) BOOL supportsAudioOnly;
@property (nonatomic) BOOL supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail;
@property (nonatomic) BOOL supportsCurrentPlatform;
@property (nonatomic) BOOL supportsRinging;
@property (nonatomic) BOOL supportsDynamicSystemUI;
@property (nonatomic) unsigned int audioSessionID;
@property (retain, nonatomic) NSString *ringtoneSound;
@property (copy, nonatomic) NSData *iconTemplateImageData;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic) BOOL includesCallsInRecents;
@property (nonatomic) BOOL supportsVideo;
@property (copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalizedName:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
