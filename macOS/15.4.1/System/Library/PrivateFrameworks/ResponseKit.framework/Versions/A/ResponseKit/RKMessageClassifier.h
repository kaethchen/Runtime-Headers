@interface RKMessageClassifier : NSObject

+ (id)preferredLanguages;
+ (void)setPreferredLanguages:(id)a0;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1 conversationTurns:(id)a2;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1;
+ (BOOL)questionClassification:(id)a0 withLanguageIdentifier:(id)a1;

@end
