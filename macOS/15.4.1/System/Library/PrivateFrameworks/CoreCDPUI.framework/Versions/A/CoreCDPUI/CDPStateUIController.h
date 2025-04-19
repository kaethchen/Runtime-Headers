@class NSView, NSWindow, NSImageView;
@protocol CDPWindowDelegateProtocol;

@interface CDPStateUIController : CDPStateBaseUIController

@property (retain, nonatomic) NSWindow *iCDPWindow;
@property (retain, nonatomic) NSView *iCDPWindowView;
@property (retain, nonatomic) NSImageView *displayImageView;
@property (retain, nonatomic) id<CDPWindowDelegateProtocol> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endCDPView;
- (void)changeView:(id)a0;
- (void)setupCDPView:(id)a0;
- (void)showCDPView:(id)a0;
- (void)showCDPView:(id)a0 modalForWindow:(id)a1;

@end
