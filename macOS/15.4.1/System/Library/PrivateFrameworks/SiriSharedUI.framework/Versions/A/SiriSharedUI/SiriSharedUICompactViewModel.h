@class NSArray, SRUIFSpeechRecognitionHypothesis, SiriSharedUILatencyViewModel;

@interface SiriSharedUICompactViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) long long inputType;
@property (readonly, copy, nonatomic) NSArray *resultTranscriptItems;
@property (readonly, copy, nonatomic) NSArray *conversationTranscriptItems;
@property (readonly, copy, nonatomic) NSArray *additionalPlatterTranscriptItems;
@property (readonly, copy, nonatomic) NSArray *serverUtterances;
@property (readonly, copy, nonatomic) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis;
@property (readonly, copy, nonatomic) SiriSharedUILatencyViewModel *latencyViewModel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_copyWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 additionalPlatterTranscriptItems:(id)a3 serverUtterances:(id)a4 speechRecognitionHypothesis:(id)a5 latencyViewUtterance:(id)a6;
- (id)_initWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 additionalPlatterTranscriptItems:(id)a3 serverUtterances:(id)a4 speechRecognitionHypothesis:(id)a5 latencyViewModel:(id)a6;
- (id)copyWithAdditionalPlatterTranscriptItems:(id)a0;
- (id)copyWithConversationTranscriptItems:(id)a0 serverUtterances:(id)a1 speechRecognitionHypothesis:(id)a2 latencyViewUtterance:(id)a3;
- (id)copyWithInputType:(long long)a0;
- (id)copyWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 serverUtterances:(id)a3 speechRecognitionHypothesis:(id)a4;
- (id)copyWithLatencyIntentSummary:(id)a0;
- (id)copyWithLatencyViewModel:(id)a0;
- (id)copyWithResultTranscriptItems:(id)a0;
- (id)copyWithResultTranscriptItems:(id)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 speechRecognitionHypothesis:(id)a3;
- (id)copyWithServerUtterances:(id)a0 speechRecognitionHypothesis:(id)a1 latencyViewUtterance:(id)a2;
- (id)copyWithSpeechRecognitionHypothesis:(id)a0;
- (id)initWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 additionalPlatterTranscriptItems:(id)a3 serverUtterances:(id)a4 speechRecognitionHypothesis:(id)a5;
- (id)initWithInputType:(long long)a0 speechRecognitionHypothesis:(id)a1;

@end
