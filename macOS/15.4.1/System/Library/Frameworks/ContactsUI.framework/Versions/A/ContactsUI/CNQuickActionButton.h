@class NSString;
@protocol CNCancelable;

@interface CNQuickActionButton : ABOnBlueButton <NSAccessibilityButton>

@property (retain) id<CNCancelable> performDefaultActionToken;
@property (retain) id<CNCancelable> showDisambiguationUIToken;
@property (copy, nonatomic) id /* block */ mouseDownHandler;
@property (copy, nonatomic) id /* block */ secondaryMouseDownHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)accessibilityPerformPress;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)attachPerformDefaultActionRecognizer;
- (void)attachShowDisambiguationUIRecognizer;

@end
