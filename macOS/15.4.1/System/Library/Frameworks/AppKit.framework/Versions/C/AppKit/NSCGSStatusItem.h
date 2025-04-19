@class NSString;

@interface NSCGSStatusItem : NSObject {
    unsigned int _commitFlags;
    unsigned int _windowID;
    BOOL _isReplicant;
    unsigned int _parentWindowID;
    NSString *_confiningDisplayID;
    unsigned int _flags;
    int _priority;
    int _systemInsertOrder;
    BOOL _installed;
    float _preferredPosition;
    unsigned int _appearance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectedContentFrame;
    float _dropPriority;
    int _layoutIndex;
}

@property (readonly) unsigned int windowID;
@property (readonly, getter=isDraggedOutOfBar) BOOL draggedOutOfBar;
@property (getter=isInstalled) BOOL installed;
@property float preferredPosition;
@property (retain) NSString *confiningDisplayID;
@property unsigned int flags;
@property unsigned int appearance;
@property float dropPriority;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedContentFrame;

+ (id)_statusItemWithWindowID:(unsigned int)a0 isReplicant:(BOOL)a1 parent:(unsigned int)a2 confiningDisplayID:(id)a3 flags:(unsigned int)a4 priority:(int)a5 systemInsertOrder:(int)a6 preferredPosition:(float)a7 appearance:(unsigned int)a8;
+ (void)addMetricsChangedNotificationHandler:(id /* block */)a0;
+ (void)addNavigationChangedNotificationHandler:(id /* block */)a0;
+ (unsigned int)currentNavigationWindowID;
+ (void)enableLayoutChangeNotificationsWithHandler:(id /* block */)a0;
+ (void)resetLayout:(id)a0;
+ (id)statusBarLayoutPreferringAppearance:(unsigned int)a0 resolution:(double)a1;
+ (id)statusBarMetrics;
+ (id)statusItemReplicantWithWindowID:(unsigned int)a0 parent:(unsigned int)a1 confiningDisplayID:(id)a2 flags:(unsigned int)a3 appearance:(unsigned int)a4;
+ (id)statusItemWithWindowID:(unsigned int)a0 confiningDisplayID:(id)a1 flags:(unsigned int)a2 priority:(int)a3 systemInsertOrder:(int)a4 preferredPosition:(float)a5 appearance:(unsigned int)a6;

- (void)dealloc;
- (void)setLayoutIndex:(int)a0;
- (id)initWithWindowID:(unsigned int)a0 isReplicant:(BOOL)a1 parent:(unsigned int)a2 confiningDisplayID:(id)a3 flags:(unsigned int)a4 priority:(int)a5 systemInsertOrder:(int)a6 preferredPosition:(float)a7 appearance:(unsigned int)a8;
- (void)navigateWithCommand:(unsigned int)a0 options:(unsigned int)a1;
- (void)presentStatusIndicator:(unsigned int)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)rebuildStatusBar;

@end
