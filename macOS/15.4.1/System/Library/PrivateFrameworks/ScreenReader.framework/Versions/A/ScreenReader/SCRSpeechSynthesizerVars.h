@class NSLock;

@interface SCRSpeechSynthesizerVars : NSObject

@property (retain, nonatomic) NSLock *_generalLock;

+ (BOOL)findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (id)voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
+ (id)characterRangesForVoice:(id)a0;

- (void).cxx_destruct;

@end
