@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (struct _NSZone { } *)zone;
- (BOOL)isEnabled;
- (void)collectIfNeeded;
- (void)disable;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enable;
- (void)enableCollectorForPointer:(const void *)a0;
- (BOOL)isCollecting;

@end
