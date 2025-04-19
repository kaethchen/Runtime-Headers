@class NSProgressIndicator, NSString, NSView, NSTouchBar, NSTextField, NSArray, NSDictionary, iCloudTouchBarController, NSButton;
@protocol MMWebViewButtonBarDelegate;

@interface MMWebViewButtonBar : NSObject <NSTouchBarProvider> {
    NSView *_buttonBarView;
    NSButton *_button1;
    NSButton *_button2;
    NSButton *_button3;
    NSProgressIndicator *_spinner;
    NSTextField *_spinnerTitle;
    NSButton *_helpButton;
    NSArray *_buttonArray;
}

@property (retain) iCloudTouchBarController *touchBarController;
@property (retain) NSDictionary *buttonBarDict;
@property id<MMWebViewButtonBarDelegate> delegate;
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
