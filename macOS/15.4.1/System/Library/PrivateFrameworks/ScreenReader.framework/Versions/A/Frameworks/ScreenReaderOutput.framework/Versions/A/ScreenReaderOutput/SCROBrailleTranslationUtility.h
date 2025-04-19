@interface SCROBrailleTranslationUtility

+ (void /* unknown type, empty encoding */)initialize;
+ (id)_dotDescriptionForBrailleString:(id)a0;
+ (id)_japaneseIndicatorNameForBrailleString:(id)a0;
+ (id)_spokenStringForBrailleString:(id)a0 isDelete:(BOOL)a1 speakLiterally:(out BOOL *)a2 modifiers:(id)a3;
+ (id)_translatedTextForPrefixBraille:(id)a0 printBraille:(id)a1 translationMode:(unsigned long long)a2;
+ (id)_trimCommonPrefixWithString:(id)a0 fromString:(id)a1;
+ (id)spokenStringForDeletedBrailleString:(id)a0 speakLiterally:(out BOOL *)a1;
+ (id)spokenStringForInsertedBrailleString:(id)a0 speakLiterally:(out BOOL *)a1 modifiers:(id)a2;
+ (id)translatedTextInIsolationForBraille:(id)a0 translationMode:(unsigned long long)a1;

@end
