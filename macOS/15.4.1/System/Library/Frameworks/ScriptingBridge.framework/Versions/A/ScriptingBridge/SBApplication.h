@protocol SBApplicationDelegate;

@interface SBApplication : SBObject <NSCoding>

@property (readonly, getter=isRunning) BOOL running;
@property (retain) id<SBApplicationDelegate> delegate;
@property unsigned int launchFlags;
@property int sendMode;
@property long long timeout;

+ (id)currentApplication;
+ (id)applicationWithBundleIdentifier:(id)a0;
+ (id)applicationWithProcessIdentifier:(int)a0;
+ (id)applicationWithURL:(id)a0;
+ (void)ensureScriptingAdditionsLoaded;
+ (void)loadScriptingAdditions;
+ (id)standardAdditions;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)activate;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithContext:(id)a0;
- (id)initWithProcessIdentifier:(int)a0;
- (Class)classForScriptingClass:(id)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)objectWithSpecifier:(id)a0;
- (BOOL)shouldCreateClasses;

@end
