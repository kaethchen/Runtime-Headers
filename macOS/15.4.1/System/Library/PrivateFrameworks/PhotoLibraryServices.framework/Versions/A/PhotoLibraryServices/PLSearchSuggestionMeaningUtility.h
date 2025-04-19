@interface PLSearchSuggestionMeaningUtility : NSObject

+ (id)_templateKeyPrefixForMeaningTemplateType:(unsigned long long)a0;
+ (id)generateMeaningBasedTemplateWithMeaningTemplateType:(unsigned long long)a0 meaningTemplateSubType:(unsigned long long)a1 calendar:(id)a2 todayDate:(id)a3 locale:(id)a4;
+ (id)meaningIdentifierForMeaningTemplateType:(unsigned long long)a0;
+ (id)supportedMeaningIdentifiers;

@end
