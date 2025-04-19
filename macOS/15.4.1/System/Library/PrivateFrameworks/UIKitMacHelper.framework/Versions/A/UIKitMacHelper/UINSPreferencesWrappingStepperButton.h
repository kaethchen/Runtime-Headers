@class NSString, NSUserDefaultsController;

@interface UINSPreferencesWrappingStepperButton : NSButton <NSViewToolTipOwner>

@property (copy) NSString *keyPath;
@property (retain) NSUserDefaultsController *userDefaultsController;
@property (copy, nonatomic) NSString *toolTipString;
@property (copy, nonatomic) NSString *alternateToolTipString;
@property (nonatomic) long long minimumValue;
@property (nonatomic) long long maximumValue;
@property (nonatomic) long long buttonValue;
@property (retain, nonatomic) id eventMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)viewDidMoveToWindow;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidResignKey:(id)a0;
- (void)buttonAction:(id)a0;
- (void)checkAltKey;
- (BOOL)isAltKeyDown;
- (void)setAltKeyDown:(BOOL)a0;

@end
