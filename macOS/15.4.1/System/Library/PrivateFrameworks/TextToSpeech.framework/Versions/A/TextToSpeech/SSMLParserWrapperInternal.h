@interface SSMLParserWrapperInternal : NSObject

- (id)init;
- (id)generateSSMLFromAVSpeechUtterance:(id)a0;
- (id)generateSSMLFromPlainTalkString:(id)a0;
- (id)generateSSMLFromString:(id)a0;
- (id)parseSSMLToPlainTalk:(id)a0;
- (id)parseSSMLToPlainText:(id)a0;

@end
