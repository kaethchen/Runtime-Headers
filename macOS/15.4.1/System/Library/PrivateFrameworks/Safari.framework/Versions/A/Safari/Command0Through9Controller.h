@interface Command0Through9Controller : NSObject

+ (long long)_outcomeForEvent:(id)a0 handledBeforeWebProcess:(BOOL)a1 forWindowController:(id)a2 index:(unsigned long long *)a3;
+ (BOOL)handleEvent:(id)a0 beforeWebProcessDoes:(BOOL)a1 forWindowController:(id)a2;
+ (BOOL)shouldSwitchTabInResponseToKeyEvent:(id)a0 forWindowController:(id)a1;
+ (BOOL)shouldVisitFavoriteInResponseToKeyEvent:(id)a0;

@end
