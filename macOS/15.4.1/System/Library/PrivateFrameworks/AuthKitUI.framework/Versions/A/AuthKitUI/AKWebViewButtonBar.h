@class NSProgressIndicator, NSString, NSView, NSTouchBar, NSTextField, NSArray, NSDictionary, AKTouchBarController, NSButton;
@protocol AKWebViewButtonBarDelegate;

@interface AKWebViewButtonBar : NSObject <NSTouchBarProvider> {
    NSView *_buttonBarView;
    NSButton *_button1;
    NSButton *_button2;
    NSButton *_button3;
    NSProgressIndicator *_spinner;
    NSTextField *_spinnerTitle;
    NSButton *_helpButton;
    NSArray *_buttonArray;
}

@property (retain, nonatomic) AKTouchBarController *touchBarController;
@property (retain, nonatomic) NSDictionary *buttonBarDict;
@property (weak, nonatomic) id<AKWebViewButtonBarDelegate> delegate;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (id)buttonBarView;
- (void)disableButtons;
- (void)disableSpinner;
- (void)helpPressed:(id)a0;
- (void)updateButtonBarDict:(id)a0;
- (void)updateDefaultButtons;

@end
