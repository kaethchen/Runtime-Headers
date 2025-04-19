@class _FEDebugLogNode, NSString;

@interface _FEFocusEnvironmentPreferenceEnumerator : NSObject <_FEFocusEnvironmentPreferenceEnumerationContextDelegate>

@property (readonly, nonatomic) long long enumerationMode;
@property (copy, nonatomic) id /* block */ didVisitAllPreferencesForEnvironmentHandler;
@property (nonatomic) BOOL allowsInferringPreferences;
@property (copy, nonatomic) id /* block */ shouldInferPreferenceForEnvironmentHandler;
@property (retain, nonatomic) _FEDebugLogNode *debugLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)a0;
- (void)enumeratePreferencesForEnvironment:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithEnumerationMode:(long long)a0;

@end
