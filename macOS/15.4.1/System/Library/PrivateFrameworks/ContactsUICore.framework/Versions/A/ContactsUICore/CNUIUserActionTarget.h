@class NSString;
@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (retain) id<CNTUCallProvider> callProvider;

+ (id)targetForVideoWithCallProvider:(id)a0;
+ (id)targetForVoiceWithCallProvider:(id)a0;
+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForDirections;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForSendMessageIntentWithAppProxy:(id)a0;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)a0;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)a0;
+ (id)targetForTextWithAvailableDefaultAppProxy:(id)a0;
+ (id)targetForTextWithMessages;
+ (id)targetForTextWithSkype;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithTelephony;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)actionsForContact:(id)a0 discoveringEnvironment:(id)a1;
- (id)actionsForEmailAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForInstantMessageAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPostalAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForSocialProfiles:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1 teamIdentifier:(id)a2;

@end
