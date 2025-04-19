@class NSDictionary, NSBundle;
@protocol CIPlugInRegistration;

@interface CIPlugIn : NSObject {
    void *_priv[8];
}

@property (retain, nonatomic) NSBundle *plugInBundle;
@property (nonatomic) int loadStatus;
@property (retain, nonatomic) NSDictionary *descriptionDictionary;
@property (nonatomic) long long flags;
@property (retain, nonatomic) id<CIPlugInRegistration> pluginLoader;
@property (readonly, retain, nonatomic) NSDictionary *filtersDictionary;

+ (void)loadPlugIn:(id)a0 allowExecutableCode:(BOOL)a1;
+ (void)addAllPlugInsAtURL:(id)a0 flags:(int)a1;
+ (void)addPlugInAtURL:(id)a0 flags:(int)a1;
+ (BOOL)hasPluginWithIdentifier:(id)a0;
+ (id)imageUnitDirectoryURLs;
+ (BOOL)isPlugInAlreadyLoadedAtURL:(id)a0;
+ (void)loadAllPlugIns;
+ (void)loadNonExecutablePlugIn:(id)a0;
+ (void)loadNonExecutablePlugIns;
+ (void)loadPlugIn:(id)a0 allowNonExecutable:(BOOL)a1;
+ (void)scanForPlugInsWithFlags:(int)a0;
+ (id)uniqueIdentifierForFileAtURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (int)loadPlugIn;

@end
