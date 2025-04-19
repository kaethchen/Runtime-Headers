@class NSArray, NSIndexSet, NSCalendar, NSDate, NSLocale;

@interface PLSearchSuggestionTemplateProvider : NSObject

@property (retain, nonatomic) NSArray *allTemplates;
@property (retain, nonatomic) NSArray *allTemplatesKeys;
@property (retain, nonatomic) NSArray *dateOnlyTemplates;
@property (retain, nonatomic) NSIndexSet *nonIdentifierBasedSupportedSearchEntityTypes;
@property (retain, nonatomic) NSArray *supportedIdentifiers;
@property (retain, nonatomic) NSArray *allDateFilters;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *todayDate;
@property (retain, nonatomic) NSLocale *locale;

+ (id)limitedTemplateKeys;
+ (unsigned long long)localeSupportTypeForTemplateWithKey:(id)a0 locale:(id)a1;
+ (id)templateForRankedGroup:(id)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)_allDateFilters;
- (id)_dateOnlyTemplates;
- (id)dateFilterForSearchSuggestionTemplateDateType:(unsigned long long)a0;
- (id)templatesForSearchIndexCategory:(unsigned long long)a0 secondIndexCategory:(unsigned long long)a1;

@end
