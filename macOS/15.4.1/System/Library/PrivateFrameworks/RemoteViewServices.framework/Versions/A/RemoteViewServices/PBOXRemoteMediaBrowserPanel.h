@class NSString;

@interface PBOXRemoteMediaBrowserPanel : NSRemotePanel {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    BOOL _isVisible;
}

@property unsigned long long browserType;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (copy) NSString *autosaveName;
@property (readonly) BOOL isVisible;

+ (id)keyPathsForPanelSettings;

- (void).cxx_destruct;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (unsigned long long)_panelType;
- (id)dictionaryForObservedValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)serializeSettings;

@end
