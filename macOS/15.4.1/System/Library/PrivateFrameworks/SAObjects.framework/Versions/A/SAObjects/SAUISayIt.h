@class NSString, NSArray, SAUIAudioData, NSNumber, SAUIListenAfterSpeakingBehavior;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *audioData;
@property (copy, nonatomic) NSString *audioDataUrl;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSArray *coordinationOptions;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *personaAccessLevel;
@property (copy, nonatomic) NSString *personaId;
@property (nonatomic) BOOL repeatable;
@property (copy, nonatomic) NSString *voiceName;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
