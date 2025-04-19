@interface CNUIUserActionItemComparator : NSObject

+ (id /* block */)comparatorWithActionItemGrouping;
+ (id /* block */)comparatorWithAlphabeticalOrderByLabel;
+ (id /* block */)comparatorWithAlphabeticalOrderByTargetHandle;
+ (id /* block */)comparatorWithDefaultAppsScorer:(id)a0;
+ (id /* block */)comparatorWithPreferredLabelsFirst;
+ (id)defaultAppScoreForUserAction:(id)a0 scorer:(id)a1;
+ (BOOL)isUserActionForDefaultApps:(id)a0;
+ (id)preferredLabelScoreForUserAction:(id)a0;

@end
