@interface TUConversationParticipantCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isPersonaAvailable) BOOL personaAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable;
@property (nonatomic, getter=isUPlusOneAVLessAvailable) BOOL uPlusOneAVLessAvailable;
@property (nonatomic) BOOL supportsLeaveContext;
@property (nonatomic) BOOL supportsRequestToScreenShare;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) unsigned long long visionFeatureVersion;
@property (nonatomic) unsigned long long visionCallEstablishmentVersion;
@property (nonatomic, getter=isUPlusOneVisionToVisionAvailable) BOOL uPlusOneVisionToVisionAvailable;
@property (nonatomic, getter=isPhotosSharePlayAvailable) BOOL photosSharePlayAvailable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCapabilities:(id)a0;

@end
