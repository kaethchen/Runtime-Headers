@interface EKFamilyCircleManager : NSObject

+ (void)isFamilyCalendar:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isFamilyCalendar:(id)a0 givenFamilySharees:(id)a1;
+ (BOOL)isFamilyCalendarGivenCalendarSharees:(id)a0 familySharees:(id)a1 isPrimaryAppleAccount:(BOOL)a2;
+ (void)requestFamilyShareesWithCompletion:(id /* block */)a0;

@end
