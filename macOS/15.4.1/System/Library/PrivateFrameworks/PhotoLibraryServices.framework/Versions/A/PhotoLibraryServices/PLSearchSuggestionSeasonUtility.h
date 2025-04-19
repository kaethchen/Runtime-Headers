@interface PLSearchSuggestionSeasonUtility : NSObject

+ (id)_templateKeySubstringForSeasonTemplateType:(unsigned long long)a0;
+ (id)generateSeasonBasedTemplateWithSeasonTemplateType:(unsigned long long)a0 seasonTemplateSubType:(unsigned long long)a1 calendar:(id)a2 todayDate:(id)a3 locale:(id)a4;
+ (id)seasonIdentifierForSeasonTemplateType:(unsigned long long)a0;
+ (id)supportedSeasonIdentifiers;

@end
