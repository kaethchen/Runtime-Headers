@class NSString, NSWindow;

@interface NSRendezvousWindowRemoteViewDelegate : NSSelfDestructingRemoteViewDelegate <NSRendezvousWindowDelegate> {
    unsigned char _isSettingValue : 1;
    NSWindow *_window;
}

@property (readonly) BOOL isSettingValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(id)a3;
- (id)initWithWindow:(id)a0;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidInvalidate:(id)a0;
- (void)_setAccessibilityElement:(id)a0 forKey:(id)a1 context:(id)a2;
- (void)_setValue:(id)a0 forKey:(id)a1 context:(id)a2;
- (void)_setWindowLevel:(id)a0 forKey:(id)a1 ofView:(id)a2;
- (void)disengageFromWindow;

@end
