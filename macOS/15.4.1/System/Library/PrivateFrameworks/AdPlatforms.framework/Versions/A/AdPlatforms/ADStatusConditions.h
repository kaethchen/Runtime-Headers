@interface ADStatusConditions : NSObject

+ (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;

@end
