@interface CalLocalizedCalendarTitles : NSObject

+ (id)localizedBirthdayCalendarTitle;
+ (id)localizedDefaultCalendarTitle;
+ (id)localizedDefaultReminderListTitle;
+ (id)localizedScheduledRemindersCalendarTitle;
+ (id)localizedSiriSuggestedEventsCalendarTitle;
+ (id)localizedTitleForTitle:(id)a0 isSuggestedEventCalendar:(BOOL)a1 isBirthdayCalendar:(BOOL)a2 allowsReminders:(BOOL)a3 isIntegrationCalendar:(BOOL)a4;
+ (id)localizedVirtualCalendarTitle;

@end
