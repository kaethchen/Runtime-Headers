@class NSDictionary, NSUserDefaults;

@interface FPUserDefaultsWithRootUserWorkaround : NSObject {
    NSUserDefaults *_userDefaults;
    NSDictionary *_localUserDefaults;
}

+ (id)_userDefaultsSearchList;

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;

@end
