@class SVXSpeechSynthesisResult, NSString, NSError, SVXSpeechSynthesisUtteranceInfo;

@interface _SVXSpeechSynthesisResultMutation : NSObject <SVXSpeechSynthesisResultMutating> {
    SVXSpeechSynthesisResult *_baseModel;
    long long _type;
    SVXSpeechSynthesisUtteranceInfo *_utteranceInfo;
    NSError *_error;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasUtteranceInfo : 1; unsigned char hasError : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setType:(long long)a0;
- (void)setError:(id)a0;
- (id)generate;
- (id)initWithBaseModel:(id)a0;
- (void)setUtteranceInfo:(id)a0;

@end
