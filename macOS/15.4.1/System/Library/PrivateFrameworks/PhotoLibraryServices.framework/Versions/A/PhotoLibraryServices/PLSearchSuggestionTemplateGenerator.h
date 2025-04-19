@class NSLocale, NSCalendar, NSDate;

@interface PLSearchSuggestionTemplateGenerator : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *todayDate;
@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)allPetTemplates;
- (id)allAtTheSceneTemplates;
- (id)allDateTemplates;
- (id)allHolidayTemplates;
- (id)allMeaningTemplates;
- (id)allMiscellaneousTemplates;
- (id)allPersonTemplates;
- (id)allSceneTemplates;
- (id)allSeasonTemplates;
- (id)allTemplates;
- (id)allTripTemplates;
- (id)initWithCalendar:(id)a0 todayDate:(id)a1 locale:(id)a2;

@end
