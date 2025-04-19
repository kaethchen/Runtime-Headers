@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultInstance;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;

@end
