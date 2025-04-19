@class _WMWindowChildInfo, NSString, NSArray, _WMWindow;

@interface SLSWMBridgedWindow : NSObject <WMWindowDelegate> {
    unsigned int _windowID;
    _WMWindow *_window;
    BOOL _individuallyOrderedOut;
    SLSWMBridgedWindow *_parentWindow;
    _WMWindowChildInfo *_parentChildInfo;
    NSArray *_children;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setWindowLevel:(int)a0;
- (void)addChildWindow:(id)a0 ordered:(int)a1;
- (void)clearOrderingGroup;
- (id)initWithWindowID:(unsigned int)a0;
- (void)removeChildWindow:(id)a0;
- (void)window:(id)a0 didUpdateWithChangedProperties:(unsigned long long)a1;
- (void)_rebuildChildWindowInfos;
- (void)orderWindow:(int)a0 relativeToID:(unsigned int)a1 relativeTo:(id)a2 orderGroup:(BOOL)a3;
- (void)removeFromParent;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceAsync:(BOOL)a1;

@end
