@class NSDictionary;

@interface MPDisplayHW : NSObject

@property int displayID;
@property (retain) NSDictionary *displayInfo;

- (void)dealloc;
- (int)setActivePresetIndex:(int)a0;
- (id)initWithDisplayID:(int)a0;
- (id)arrayForDisplayInfoKey:(id)a0;
- (id)arrayForKey:(id)a0 inDict:(id)a1;
- (id)coreDisplayInfoDictionary;
- (int)currentModeNumber;
- (id)dictForDisplayInfoKey:(id)a0;
- (id)dictForKey:(id)a0 inDict:(id)a1;
- (unsigned int)displayStatusQuery:(unsigned int)a0;
- (void)getDisplayModeDescriptions:(struct _CGSDisplayModeDescription { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; char x12[129]; int x13; int x14; int x15; int x16; int x17; int x18; int x19; float x20; } *)a0 count:(int *)a1;
- (BOOL)hasMenuBar;
- (id)initWithDisplayInfoDict:(id)a0;
- (BOOL)isProMotionModeAtIndex:(int)a0 modeNumber:(int)a1;
- (BOOL)isProjector;
- (BOOL)isVRRDisplayMode:(int)a0;
- (BOOL)isVRRModeAtIndex:(int)a0 modeNumber:(int)a1;
- (float)minRefreshRateForModeAtIndex:(int)a0 modeNumber:(int)a1;
- (id)numberForDisplayInfoKey:(id)a0;
- (id)numberForKey:(id)a0 inDict:(id)a1;
- (int)numberOfDisplayModes;
- (id)presetAtIndex:(unsigned int)a0;
- (unsigned int)presetsCount;
- (id)stringForDisplayInfoKey:(id)a0;
- (id)stringForKey:(id)a0 inDict:(id)a1;

@end
