@class NSString, BMUserFocusModeComputed;

@interface SearchUIFocusModeBiomeEvent : SearchUIBiomeEvent

@property (retain, nonatomic) BMUserFocusModeComputed *biomeEvent;
@property (retain, nonatomic) NSString *observedFocusModeIdentifier;

+ (BOOL)supportsEvent:(id)a0 contextualAction:(id)a1;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 contextualAction:(id)a1;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;

@end
