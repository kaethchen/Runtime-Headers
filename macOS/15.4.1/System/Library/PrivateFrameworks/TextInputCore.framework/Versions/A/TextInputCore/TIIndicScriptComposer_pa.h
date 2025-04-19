@class NSDictionary;

@interface TIIndicScriptComposer_pa : TIIndicScriptComposer {
    NSDictionary *_modifiersToAllowedPrefixes;
}

@property (readonly, nonatomic) NSDictionary *_modifiersToAllowedPrefixes;

- (void).cxx_destruct;
- (id)contextualDisplayKeys;
- (id)_displayStringForModifier:(id)a0 withPrefix:(id)a1;
- (id)_outputForModifier:(id)a0 withPrefix:(id)a1;
- (id)_outputForModifier:(id)a0 withPrefix:(id)a1 displayString:(id *)a2;
- (id)stringByComposingInput:(id)a0;

@end
