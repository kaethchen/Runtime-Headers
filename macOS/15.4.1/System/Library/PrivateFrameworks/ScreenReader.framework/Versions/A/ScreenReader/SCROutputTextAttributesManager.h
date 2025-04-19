@class NSLock, NSDictionary;

@interface SCROutputTextAttributesManager : NSObject {
    NSLock *_previousAttributesLock;
    NSDictionary *_previousAttributes;
}

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)createActionsByExpandingTextAttributesInAction:(id)a0 targetComponent:(id)a1;
- (id)_basicActionForTargetComponent:(id)a0;
- (id)_actionForSound:(id)a0 encounteredKey:(long long)a1 encounteredAttribute:(id)a2;
- (id)_actionForString:(id)a0 targetComponent:(id)a1 encounteredKey:(long long)a2 encounteredAttribute:(id)a3 isLowerPitch:(BOOL)a4;
- (id)_annotationDescriptionWithLabel:(id)a0 elementDescription:(id)a1 position:(long long)a2 context:(id)a3;
- (id)_annotationElementDescriptionForElement:(id)a0;
- (id)_attributedStringFromAction:(id)a0 isBrailleComponent:(BOOL)a1;
- (id)_attributesOfOffsetMappedString:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)_attributesWithResolvedFontTraitsFromAttributes:(id)a0;
- (id)_copyOfAction:(id)a0 isBrailleComponent:(BOOL)a1 withoutRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 orRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)_copyOfAction:(id)a0 withNewString:(id)a1 isBrailleComponent:(BOOL)a2;
- (id)_deltaTextAttributesWithAttributes:(id)a0 previousAttributes:(id)a1;
- (id)_getContextStringFromAction:(id)a0 isBrailleComponent:(BOOL)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 limitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (long long)_getPositiveIntegerFromNumberValue:(id)a0;
- (id)_lowerPitchCopyOfAction:(id)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 limitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_stringDescribingAttributes:(id)a0 isSpeechComponent:(BOOL)a1;
- (id)_stringFromAction:(id)a0 isBrailleComponent:(BOOL)a1;
- (id)_validatedNumberFromNumberValue:(id)a0;
- (id)_validatedStringFromStringValue:(id)a0;
- (id)previousAttributesForTargetComponent:(id)a0;
- (void)setPreviousAttributes:(id)a0 targetComponent:(id)a1;
- (id)stringRepresentingTextAttributes:(id)a0;

@end
