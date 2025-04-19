@class NSArray;

@interface SGTMailFlagColorSuggester : SGTSuggester

@property (copy) NSArray *mailFlagColors;

+ (id)flagColorImageForSuggestion:(id)a0;
+ (id)flagColorsCategory;
+ (BOOL)isMailFlagColorRepresentedObject:(id)a0;
+ (id)mailFlagColorRepresentedObjectForRepresentedObject:(id)a0;
+ (id)menuFlagColorImageForSuggestion:(id)a0;
+ (id)representedObjectForMailFlagColorRepresentedObject:(id)a0;
+ (id)tokenFlagColorImageForSuggestion:(id)a0;

- (void).cxx_destruct;
- (void)setInput:(id)a0;

@end
