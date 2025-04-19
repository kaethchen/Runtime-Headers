@class NSString;

@interface MGSpeakerAccessory : MGSoloDevice <MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol, MGRoutableAudioEntityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)type;

@end
