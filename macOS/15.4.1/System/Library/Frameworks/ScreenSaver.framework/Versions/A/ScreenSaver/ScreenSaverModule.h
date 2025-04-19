@class NSString, NSBundle;

@interface ScreenSaverModule : NSObject <NSCopying> {
    NSString *_moduleName;
    NSString *_displayName;
    NSString *_path;
    NSBundle *_bundle;
    id _representedObject;
    int _type;
    BOOL _enabled;
    BOOL _archCompatible;
    BOOL _requiresGraphicsAcceleration;
    BOOL _hasConfigureSheet;
    int _archToUse;
}

+ (id)moduleWithDictionary:(id)a0;
+ (id)moduleWithName:(id)a0;
+ (id)moduleWithPath:(id)a0;
+ (id)floatingMessageModuleWithMessage:(id)a0;
+ (id)localizedSaverNameForPath:(id)a0;
+ (id)moduleFromLegacyDefaults:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)enabled;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)path;
- (void)setEnabled:(BOOL)a0;
- (void)setName:(id)a0;
- (void)setPath:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (void)setDisplayName:(id)a0;
- (id)bundle;
- (id)bundleID;
- (long long)caseInsensitiveCompare:(id)a0;
- (id)displayName;
- (void)setRepresentedObject:(id)a0;
- (id)dictionaryRepresentation;
- (id)representedObject;
- (id)thumbnail;
- (void)addMessageTracerEntry;
- (int)architectureToUse;
- (BOOL)canRunAtLoginWindow;
- (id)crashReporterString;
- (id)defaultsName;
- (BOOL)hasConfigureSheet;
- (BOOL)is32bitOnly;
- (BOOL)isCompatibleWithCurrentArch;
- (BOOL)isQC;
- (BOOL)isScreenSaver;
- (id)loadViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1;
- (void)presentConfigureSheetWithCompletionBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (void)requestConfigurationSheetViewController:(id /* block */)a0;
- (void)requestConfigurationViewController:(id /* block */)a0;
- (BOOL)requiresGraphicsAcceleration;
- (id)saverPath;
- (void)setRequiresGraphicsAcceleration:(BOOL)a0;
- (BOOL)signedByApple;
- (void)unloadModule;

@end
