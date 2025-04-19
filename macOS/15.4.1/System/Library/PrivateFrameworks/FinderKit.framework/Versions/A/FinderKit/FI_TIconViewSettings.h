@class NSMutableDictionary, NSDictionary, NSData, NSColor;

@interface FI_TIconViewSettings : NSObject {
    NSMutableDictionary *_settings;
    int _backgroundImageGenerationCount;
}

@property (readonly, retain, nonatomic) NSDictionary *settings;
@property (nonatomic) double iconSize;
@property (nonatomic) double textSize;
@property (nonatomic) double gridSpacing;
@property (nonatomic) struct CGPoint { double x0; double x1; } gridOffset;
@property (nonatomic) BOOL labelOnBottom;
@property (nonatomic) BOOL showItemInfo;
@property (nonatomic) BOOL showIconPreview;
@property (nonatomic) int sortBy;
@property (nonatomic) int backgroundType;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSData *backgroundImageBookmark;

+ (id)defaultSettingsForNewUser;
+ (id)settingsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (id)settingsFromBrowserSettings:(struct TIconBrowserSettings { void /* function */ **x0; void /* function */ **x1; int x2; unsigned int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; struct CGPoint { double x0; double x1; } x8; short x9; BOOL x10; BOOL x11; BOOL x12; struct RGBColor { unsigned short x0; unsigned short x1; unsigned short x2; } x13; struct TFENode { struct OpaqueNodeRef *x0; } x14; unsigned char x15; } *)a0;
+ (id)settingsFromPList:(id)a0;
+ (id)settingsFromViewOptions:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEquivalentTo:(id)a0;
- (unsigned long long)checkIntegrity:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)backgroundImageAlias;
- (int)backgroundImageGenerationCount;
- (BOOL)checkNumberSettingForKey:(id)a0 lowValue:(double)a1 highValue:(double)a2;
- (id)initWithIconBrowserSettings:(struct TIconBrowserSettings { void /* function */ **x0; void /* function */ **x1; int x2; unsigned int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; struct CGPoint { double x0; double x1; } x8; short x9; BOOL x10; BOOL x11; BOOL x12; struct RGBColor { unsigned short x0; unsigned short x1; unsigned short x2; } x13; struct TFENode { struct OpaqueNodeRef *x0; } x14; unsigned char x15; } *)a0;
- (id)initWithPList:(id)a0;
- (void)setBackgroundColorRed:(double)a0 green:(double)a1 blue:(double)a2;
- (void)setBackgroundImageAlias:(id)a0;
- (void)setBackgroundImageNode:(struct TFENode { struct OpaqueNodeRef *x0; })a0;

@end
