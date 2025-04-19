@class TVRCNowPlayingInfo, NSString, NSDictionary, NSSet, TVRCKeyboardState, NSError, TVRCSiriRemoteInfo;

@interface TVRCDeviceState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long pairingCapability;
@property (nonatomic) long long connectionType;
@property (nonatomic) long long classification;
@property (nonatomic) long long linkType;
@property (nonatomic) BOOL supportsDirectCaptionQueries;
@property (nonatomic) BOOL supportsFindMyRemote;
@property (nonatomic) BOOL supportsTouchEvents;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (copy, nonatomic) TVRCKeyboardState *keyboardState;
@property (nonatomic) long long siriRemoteFindingState;
@property (nonatomic) long long attentionState;
@property (copy, nonatomic) NSString *sourceVersion;
@property (nonatomic) long long disconnectReason;
@property (copy, nonatomic) NSError *disconnectError;
@property (copy, nonatomic) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (copy, nonatomic) TVRCNowPlayingInfo *nowPlayingInfo;

+ (id)arrayOfStatesFromDevices:(id)a0;
+ (id)deviceStateFromDevice:(id)a0;
+ (id)setOfStatesFromDevices:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)detailedDescription;

@end
