@class NSMutableArray, _PSFTZKWConfig, _CDInteractionStore, _PSSuggestionFromTextPredictorDelegateWrapper, NSObject, _PSCalendarEventPredictorDelegateWrapper, _PSKNNZKWATXDelegateWrapper;
@protocol OS_dispatch_queue;

@interface _PSFTZKWOrchestrator : NSObject <_PSFaceTimeZKWWrapperProtocol> {
    _PSCalendarEventPredictorDelegateWrapper *_calendarDelegateWrapper;
    _PSSuggestionFromTextPredictorDelegateWrapper *_unstructuredCalendarDelegateWrapper;
    _PSSuggestionFromTextPredictorDelegateWrapper *_unstructuredRemindersDelegateWrapper;
    _PSKNNZKWATXDelegateWrapper *_faceTimeInteractionModelDelegateWrapper;
    _PSKNNZKWATXDelegateWrapper *_fallbackInteractionModelDelegateWrapper;
    NSMutableArray *_clientModels;
    _CDInteractionStore *_interactionStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) _PSFTZKWConfig *config;

- (id)init;
- (void).cxx_destruct;
- (void)_createFaceTimeInteractionModelWithKNNModel:(id)a0;
- (void)_createFallbackInteractionModelWithKNNModel:(id)a0;
- (void)_createStructuredCalendarModelWithEventStore:(id)a0 contactStore:(id)a1;
- (void)_createUnstructuredCalendarModelWithEventStore:(id)a0 contactStore:(id)a1 interactionStore:(id)a2;
- (void)_createUnstructuredReminderModelWithEventStore:(id)a0 contactStore:(id)a1 interactionStore:(id)a2;
- (id)_getBlendingLayerSuggestionsWithContext:(id)a0;
- (id)_getDirectSuggestionsWithContext:(id)a0;
- (id)_getDirectSuggestionsWithContext:(id)a0 withTimeout:(double)a1;
- (id)getSuggestionsWithPredictionContext:(id)a0;
- (id)initWithKNNModel:(id)a0 interactionStore:(id)a1;
- (void)populateCaches;
- (void)updateConfigWithTrialData:(id)a0;

@end
