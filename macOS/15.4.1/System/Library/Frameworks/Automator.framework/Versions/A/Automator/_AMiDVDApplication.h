@class NSArray, NSString, _AMiDVDMenu;

@interface _AMiDVDApplication : SBApplication

@property (readonly, copy) NSArray *applicationDefinedButtonShapes;
@property int aspectRatio;
@property (copy) NSString *autoplayMovie;
@property (copy) NSArray *autoplaySlideshow;
@property int autoplaySlideshowTransitionDirection;
@property int autoplaySlideshowTransitionType;
@property (readonly, copy) NSArray *availableDVDBurners;
@property (readonly, copy) NSArray *availableTransitions;
@property BOOL backgroundEncoding;
@property BOOL bestQualityEncoding;
@property (readonly, copy) _AMiDVDMenu *currentMenu;
@property (readonly) BOOL discReady;
@property (readonly) BOOL isBurning;
@property BOOL loopAutoplay;
@property BOOL motionMode;
@property BOOL previewMode;
@property BOOL proQualityEncoding;
@property (readonly) BOOL projectDirty;
@property (copy) NSString *projectName;
@property (readonly) long long projectSize;
@property (copy) NSArray *properties;
@property BOOL quietMode;
@property (readonly) BOOL ready;
@property BOOL renderMode;
@property BOOL supportChapterMarkers;
@property int tvStandard;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

+ (id)application;

- (id)windows;
- (id)documents;
- (id)menus;
- (id)open:(id)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)applicationThemes;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;
- (id)slideshows;

@end
