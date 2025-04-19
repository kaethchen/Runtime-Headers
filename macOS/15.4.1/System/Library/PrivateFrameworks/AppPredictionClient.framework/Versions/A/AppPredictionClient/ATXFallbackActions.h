@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)fallbackActionsBundle;
+ (id)stringForFallbackActionType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)initWithClientModelSpec:(id)a0;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)searchSafari;
- (id)sendAMessage;
- (id)startATimer;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)suggestionsForAllFallbackActions;
- (id)viewPhotos;

@end
