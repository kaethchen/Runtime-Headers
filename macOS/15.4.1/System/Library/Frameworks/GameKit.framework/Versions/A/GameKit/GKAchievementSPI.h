@interface GKAchievementSPI : NSObject

+ (id)filledWithIdentifier:(id)a0 player:(id)a1 percentComplete:(double)a2 lastReportedDate:(id)a3;
+ (void)loadAchievementWithId:(id)a0 forGame:(id)a1 playerIDs:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
