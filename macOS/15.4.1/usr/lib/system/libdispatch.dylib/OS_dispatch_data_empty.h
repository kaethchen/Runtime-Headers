@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (void)_resume;
- (void)_activate;
- (void *)_getContext;
- (void)_setContext:(void *)a0;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_setTargetQueue:(id)a0;
- (void)_suspend;

@end
