@interface PLSearchSuggestionDateUtility : NSObject

+ (id)templateKeyForDateTemplateType:(unsigned long long)a0;
+ (id)_dateFilterFromStartDateComponents:(id)a0 endDateComponents:(id)a1 calendar:(id)a2 numberOfMonthsAgo:(unsigned long long)a3;
+ (id)_dateFilterFromStartDateComponents:(id)a0 endDateComponents:(id)a1 calendar:(id)a2 numberOfYearsAgo:(unsigned long long)a3;
+ (id)_dateFilterFromStartDateComponents:(id)a0 endDateComponents:(id)a1 calendar:(id)a2 startDayOffset:(unsigned long long)a3 startMonthOffset:(unsigned long long)a4 startYearOffset:(unsigned long long)a5 endDayOffset:(unsigned long long)a6 endMonthOffset:(unsigned long long)a7 endYearOffset:(unsigned long long)a8;
+ (id)allTemplateDateTypes;
+ (id)dateFilterForSearchSuggestionTemplateDateType:(unsigned long long)a0 calendar:(id)a1 relativeDate:(id)a2;

@end
