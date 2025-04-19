@interface SUIQueryContextBuilder : NSObject

+ (id)queryContextWithPerformEntityQueryCommand:(id)a0 view:(id)a1;
+ (void)setCommonPropertiesOnQueryContext:(id)a0 withView:(id)a1;
+ (id)updateQueryContext:(id)a0 withSearchString:(id)a1 showSuggestions:(BOOL)a2 view:(id)a3;

@end
