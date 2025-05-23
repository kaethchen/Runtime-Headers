@class EKEvent, NSString, NSDate;
@protocol ATXContextHeuristicsEnvironment;

@interface ATXContextEventSuggestionProducer : NSObject {
    EKEvent *_event;
    NSString *_eventTitle;
    NSDate *_validFromStartDate;
    NSDate *_validToEndDate;
    id<ATXContextHeuristicsEnvironment> _environment;
}

- (void).cxx_destruct;
- (id)_dateInterval;
- (BOOL)_isStringValidEmail:(id)a0;
- (id)_spotlightActionWithParticipant:(id)a0 subtitle:(id)a1;
- (id)_stringsWithPredictionReasons:(unsigned long long)a0;
- (id)initWithEvent:(id)a0 validFromStartDate:(id)a1 validToEndDate:(id)a2 environment:(id)a3;
- (double)scoreWithEventParticipantStatusPenalty:(double)a0;
- (id)suggestionForConferenceWithScore:(double)a0 predictionReasons:(unsigned long long)a1;
- (id)suggestionForDNDWithScore:(double)a0 predictionReasons:(unsigned long long)a1;
- (id)suggestionForEventOrganizerWithScore:(double)a0 predictionReasons:(unsigned long long)a1;
- (id)suggestionForEventParticipantWithScore:(double)a0 predictionReasons:(unsigned long long)a1;

@end
