@class NSUserDefaults;
@protocol SRUIFPreferencesDelegate;

@interface SRUIFPreferences : NSObject {
    NSUserDefaults *_userDefaults;
}

@property (weak, nonatomic) id<SRUIFPreferencesDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)stringForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)_mutateValueForKey:(id)a0 block:(id /* block */)a1;
- (id)initWithDefaultsAtURL:(id)a0;
- (id)initWithDefaultsResource:(id)a0 withExtension:(id)a1 inBundle:(id)a2;

@end
