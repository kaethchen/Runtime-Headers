@interface CPKSignalAnalytics : NSObject

+ (id)getIAGenmojiImageTypeFromImageGlyph:(id)a0;
+ (void)reportGenmojiCreationExistingGenmojiLongPressedThenNewEmojiSelectedWithImageGlyph:(id)a0;
+ (void)reportGenmojiDeletedWithImageGlyph:(id)a0;
+ (void)safelySetPayload:(id)a0 forKey:(id)a1 inDictionary:(id)a2;
+ (void)sendGenmojiCreationSignal:(id)a0 payload:(id)a1;
+ (void)sendGenmojiSignal:(id)a0 payload:(id)a1;

@end
