@interface TTSSSEUtils : NSObject

+ (id)combinedProsodyMarkupForString:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3;
+ (id)enclosedStringWithPhonemes:(id)a0 originalString:(id)a1;
+ (id)escapeSSML:(id)a0;
+ (id)genericMarkerMarkupWithName:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })nonSSMLSubstringRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromSSML:(id)a1;
+ (id)performEscapeOrDeEscapeFor:(id)a0 escape:(BOOL)a1;
+ (id)speechMarkupStringForType:(long long)a0 string:(id)a1;
+ (id)ttsMarkerForSSEMarker:(id)a0 forRequest:(id)a1;
+ (id)unescapeDelimeterBoundedSSMLInString:(id)a0;

@end
