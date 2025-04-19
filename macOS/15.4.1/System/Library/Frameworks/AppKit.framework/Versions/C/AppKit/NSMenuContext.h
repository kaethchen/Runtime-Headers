@class NSString, NSArray;

@interface NSMenuContext : NSObject <NSMenuContextProtocol> {
    void /* unknown type, empty encoding */ runLoopMode;
    void /* unknown type, empty encoding */ pluginMenus;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ keyWindow;
@property (nonatomic, weak) void /* unknown type, empty encoding */ ownerWindow;
@property (nonatomic, weak) void /* unknown type, empty encoding */ ownerView;
@property (nonatomic) void /* unknown type, empty encoding */ ownerWindowFrame;
@property (nonatomic, weak) void /* unknown type, empty encoding */ menu;
@property (nonatomic, retain) void /* unknown type, empty encoding */ event;
@property (nonatomic, retain) void /* unknown type, empty encoding */ savedFont;
@property (nonatomic, retain) void /* unknown type, empty encoding */ appearance;
@property (nonatomic, copy) NSString *runLoopMode;
@property (nonatomic, copy) NSArray *pluginMenus;
@property (nonatomic) void /* unknown type, empty encoding */ flags;
@property (nonatomic) void /* unknown type, empty encoding */ privateFlags;
@property (nonatomic) void /* unknown type, empty encoding */ frameAlignmentPoint;
@property (nonatomic) void /* unknown type, empty encoding */ minWidth;
@property (nonatomic) void /* unknown type, empty encoding */ checkedItemIndex;
@property (nonatomic) void /* unknown type, empty encoding */ positioningOptions;
@property (nonatomic) void /* unknown type, empty encoding */ popupButtonBounds;
@property (nonatomic) void /* unknown type, empty encoding */ popupButtonLabelOffset;
@property (nonatomic) void /* unknown type, empty encoding */ popupButtonSize;
@property (nonatomic) void /* unknown type, empty encoding */ positioningRect;
@property (nonatomic) void /* unknown type, empty encoding */ preferredEdge;
@property (nonatomic) void /* unknown type, empty encoding */ exclusionRect;
@property (nonatomic) void /* unknown type, empty encoding */ confinementRect;
@property (nonatomic) void /* unknown type, empty encoding */ directDisplayID;
@property (nonatomic) void /* unknown type, empty encoding */ reenableCursorRects;
@property (nonatomic) void /* unknown type, empty encoding */ useConfinementRect;
@property (nonatomic) void /* unknown type, empty encoding */ clearStartingRequestor;
@property (nonatomic) void /* unknown type, empty encoding */ menuCanceled;
@property (nonatomic) void /* unknown type, empty encoding */ menuOpened;
@property (nonatomic) void /* unknown type, empty encoding */ displayingMenu;

- (id)init;
- (void).cxx_destruct;
- (void)recordPluginMenu:(id)a0;
- (void)removePluginsFromMenus;

@end
