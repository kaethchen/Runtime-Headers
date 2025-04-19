@class NSUUID;

@interface CSVTRePromptSELFLogger : NSObject

@property (class, readonly, nonatomic) NSUUID *voiceTriggerRePromptIsolatedStreamID;

+ (void)initialize;
+ (id)sharedLogger;

- (void)logRePromptFinishedWithSiriSpeechID:(id)a0 withRePromptDate:(id)a1 withIsRePrompted:(BOOL)a2 withLocale:(id)a3;

@end
