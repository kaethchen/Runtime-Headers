@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)defaultEnvironment;
+ (id)currentEnvironment;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)defaultStack;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;
+ (char *)environmentStackKey;

- (void).cxx_destruct;
- (void)becomeCurrent;
- (void)resignCurrent;

@end
