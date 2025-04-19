@class NSString;

@interface TextToSpeech.VoiceTaggedSSMLSnippet : NSObject {
    void /* unknown type, empty encoding */ ssml;
    void /* unknown type, empty encoding */ voiceName;
    void /* unknown type, empty encoding */ language;
}

@property (nonatomic, copy) NSString *ssml;
@property (nonatomic, copy) NSString *voiceName;
@property (nonatomic, copy) NSString *language;

- (id)init;
- (void).cxx_destruct;

@end
