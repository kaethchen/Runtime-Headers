@class NSString, NSData, NSSet, NSMutableDictionary;

@interface EQKitEnvironment : NSObject <NSCopying> {
    NSMutableDictionary *_config;
    void *_operatorDictionary;
    struct Manager { void /* function */ **x0; id x1; struct Collection *x2; id x3; struct Version { unsigned long long x0; } x4; struct EQKitCacheLRUCounter { unsigned long long x0; } x5; } *_fontManager;
    void *_kerningManager;
    struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *_layoutConfig;
    void *_blahtexConfig;
}

@property (class, readonly, nonatomic) EQKitEnvironment *defaultEnvironment;
@property (class, readonly, nonatomic) NSData *defaultEnvironmentData;
@property (class, readonly, nonatomic) NSString *defaultMathFontName;
@property (class, readonly, nonatomic) NSSet *legacySTIXFontNames;

@property (readonly, nonatomic) const void *operatorDictionary;
@property (readonly, nonatomic) const struct Manager { void /* function */ **x0; id x1; struct Collection *x2; id x3; struct Version { unsigned long long x0; } x4; struct EQKitCacheLRUCounter { unsigned long long x0; } x5; } *fontManager;
@property (readonly, nonatomic) const void *kerningManager;
@property (readonly, nonatomic) const struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *layoutConfig;
@property (readonly, nonatomic) const void *blahtexConfig;
@property (nonatomic, getter=isKerningEnabled) BOOL kerningEnabled;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *mathFontName;
@property (nonatomic) BOOL usesLegacySTIXFonts;
@property (nonatomic) BOOL sourceAttribution;
@property (nonatomic) BOOL allowSingleLineHeight;
@property (readonly, nonatomic) BOOL fontsLoadedCorrectly;

+ (id)propertyListWithData:(id)a0 error:(id *)a1;
+ (id)createDefaultEnvironment;
+ (id)i_operatorDictionaryURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)beginLayout;
- (void)endLayout;
- (struct __CTFont { } *)defaultFontOfSize:(double)a0;
- (id)i_configCopy;
- (id)i_fontsDictionary;
- (id)i_mathFontName;
- (BOOL)i_requiresLegacySTIXFonts;
- (BOOL)needsToReloadFontsWhenAddingFontNamed:(id)a0;
- (void)reloadFonts;

@end
