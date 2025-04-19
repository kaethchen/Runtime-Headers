@class PBOXRemoteMediaBrowserPanel;

@interface ILMBRemoteMediaBrowserPanel : NSObject {
    PBOXRemoteMediaBrowserPanel *_browserPanel;
}

+ (id)sharedInstance;

- (id)init;
- (void)setBrowserType:(unsigned long long)a0;
- (id)autosaveName;
- (unsigned long long)browserType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setAutosaveName:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showPanel;
- (void)toggle;
- (void)hidePanel;

@end
