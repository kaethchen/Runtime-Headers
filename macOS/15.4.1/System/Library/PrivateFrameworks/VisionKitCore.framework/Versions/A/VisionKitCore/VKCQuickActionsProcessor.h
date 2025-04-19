@interface VKCQuickActionsProcessor : NSObject

+ (id)dedupeQuickActions:(id)a0;
+ (id)quickActionForElement:(id)a0 unfilteredTextElements:(id)a1;
+ (void)quickActionsFromElements:(id)a0 unfilteredElements:(id)a1 analysis:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
+ (long long)sortOrderForElement:(id)a0;
+ (id)sortQuickActions:(id)a0;

@end
