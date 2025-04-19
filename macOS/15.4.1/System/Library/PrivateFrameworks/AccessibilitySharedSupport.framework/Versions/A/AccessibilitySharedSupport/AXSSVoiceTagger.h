@interface AXSSVoiceTagger : NSObject

+ (id)_createVoiceTagWithDialect:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 content:(id)a2 createdFromNewline:(BOOL)a3;
+ (id)_currentLineContentForTag:(id)a0 inTags:(id)a1;
+ (id)_primaryDialectForTag:(id)a0 inTags:(id)a1;
+ (id)markupVoiceTagForAttributedString:(id)a0 preferredLangauge:(id)a1;
+ (id)voiceTagsForContent:(id)a0 preferredLangauge:(id)a1;

@end
