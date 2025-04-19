@class NSString, NSDictionary, SAUIAudioData;

@interface SRUIFSpeechSynthesisRequest : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) BOOL isPhonetic;
@property (readonly, nonatomic) BOOL provisional;
@property (readonly, nonatomic) BOOL delayed;
@property (readonly, nonatomic) BOOL eligibleAfterDuration;
@property (readonly, nonatomic) BOOL canUseServerTTS;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (readonly, retain, nonatomic) NSDictionary *speakableContextInfo;
@property (readonly, nonatomic) NSString *preparationIdentifier;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithAudioData:(id)a0 identifier:(id)a1 sessionId:(id)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 canUseServerTTS:(BOOL)a5 completion:(id /* block */)a6;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 language:(id)a4 gender:(id)a5 voiceName:(id)a6 provisional:(BOOL)a7 eligibleAfterDuration:(double)a8 delayed:(BOOL)a9 preparationIdentifier:(id)a10 completion:(id /* block */)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13 canUseServerTTS:(BOOL)a14;
- (id)initWithText:(id)a0 identifier:(id)a1 sessionId:(id)a2 language:(id)a3 gender:(id)a4 voiceName:(id)a5 canUseServerTTS:(BOOL)a6 completion:(id /* block */)a7;

@end
