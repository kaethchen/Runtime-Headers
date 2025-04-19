@class NSMenu, NSString, NSArray;

@interface IFXDebugMenu : NSObject {
    NSMenu *_containingMenu;
    NSString *_applicationVersionString;
    NSArray *_environmentVariable;
    NSArray *_environmentVariableDescription;
}

+ (id)debugMenu;
+ (id)_sharedDebugMenuWithApplicationVersionString:(id)a0;
+ (BOOL)loadDebugMenuWithApplicationVersionString:(const char *)a0;

- (void)dealloc;
- (id)_debugMenu;
- (BOOL)_addCrashToMenu:(id)a0;
- (BOOL)_addVersionInformation:(id)a0;
- (void)_addEnvironmentVariablesToMenu:(id)a0;
- (void)_crashThisProcess:(id)a0;
- (void)_environmentMenuItemChanged:(id)a0;
- (id)_projectVersionFromProjectInfoString:(id)a0;
- (id)initWithApplicationVersionString:(id)a0;

@end
