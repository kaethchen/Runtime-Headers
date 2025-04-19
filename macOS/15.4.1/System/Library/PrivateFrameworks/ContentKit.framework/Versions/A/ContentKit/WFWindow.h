@class NSString, NSNumber, WFImage;

@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL boundsLoaded;
@property (readonly, nonatomic) unsigned int windowID;
@property (readonly, nonatomic) struct __AXUIElement { } *element;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (retain, nonatomic) NSNumber *windowIndex;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allWindowsForBundleIdentifiers:(id)a0;
+ (id)allWindows;
+ (BOOL)isOnScreenFromWindowInfo:(id)a0;
+ (BOOL)isWindowIDOnScreen:(unsigned int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionForWindowID:(unsigned int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionFromWindowInfo:(id)a0;
+ (unsigned int)windowIDFromWindowInfo:(id)a0;
+ (id)windowInfoForWindowID:(unsigned int)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)currentScreen;
- (id)initWithWindowID:(unsigned int)a0 name:(id)a1 applicationName:(id)a2 processIdentifier:(int)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 windowIndex:(id)a5;
- (id)runningApplication;
- (void)setBoundsNeedReloading;

@end
