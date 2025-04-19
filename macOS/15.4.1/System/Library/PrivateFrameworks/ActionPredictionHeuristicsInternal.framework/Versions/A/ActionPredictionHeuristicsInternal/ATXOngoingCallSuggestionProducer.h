@protocol ATXContextHeuristicsEnvironment;

@interface ATXOngoingCallSuggestionProducer : NSObject {
    id<ATXContextHeuristicsEnvironment> _environment;
}

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)suggestionWithContact:(id)a0 score:(double)a1;
- (id)suggestionsForOngoingCall:(id)a0;

@end
