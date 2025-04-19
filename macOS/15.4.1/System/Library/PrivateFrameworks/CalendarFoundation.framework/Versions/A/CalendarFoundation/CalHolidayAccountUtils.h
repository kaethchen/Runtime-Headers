@interface CalHolidayAccountUtils : NSObject

+ (id)logHandle;
+ (id)_createUnsavedHolidayAccountWithAccountStore:(id)a0;
+ (id)_holidayAccountWithAccountStore:(id)a0;
+ (BOOL)_isEnabledWithAccount:(id)a0;
+ (void)ensureHolidayAccountExistsWithAccountStore:(id)a0;
+ (id)holidayAccountDescription;
+ (BOOL)holidayCalendarIsEnabledWithAccountStore:(id)a0;
+ (void)setHolidayCalendarIsEnabled:(BOOL)a0 withAccountStore:(id)a1;

@end
