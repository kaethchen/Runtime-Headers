@interface ATXAppLaunchDuetDataProvider : ATXDuetDataProvider

+ (id)biomePublisher:(id)a0 andEndDate:(id)a1 isIncluded:(id /* block */)a2;
+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

@end
