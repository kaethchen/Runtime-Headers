@class NSString, NSDictionary, NSLayoutConstraint, DOMDocument;

@interface IPKeyboardLayoutWebView : WebView <WebFrameLoadDelegate, WebUIDelegate>

@property (copy) NSString *inputSourceID;
@property (copy) NSString *inputSourceLanguageCode;
@property (copy) NSString *localizedInputSourceName;
@property (copy) NSString *HTMLFilename;
@property (retain) id eventMonitor;
@property (nonatomic) unsigned char physicalKeyboardHardwareID;
@property (nonatomic) unsigned int modifiedKeyState;
@property struct UCKeyboardLayout { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; struct UCKeyboardTypeHeader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x4[1]; } *keyboardLayout;
@property (retain) DOMDocument *keyboardLayoutDocument;
@property (readonly) NSDictionary *inputModeKeyboardLayoutMappingTable;
@property (readonly) NSDictionary *wubihuaWorkaroundMappingTable;
@property BOOL isKeyboardLayoutDocumentTrackpadHandwriting;
@property (weak) NSLayoutConstraint *heightConstraint;
@property (copy) NSString *keyboardLayoutIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedHardwareIDs;
+ (id)userInterfaceLocale;

- (void)dealloc;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (unsigned char)keyboardID;
- (id)webView:(id)a0 contextMenuItemsForElement:(id)a1 defaultMenuItems:(id)a2;
- (unsigned long long)webView:(id)a0 dragDestinationActionMaskForDraggingInfo:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameName:(id)a1 groupName:(id)a2;
- (void)updateKeyLabels;
- (void)updateAriaLabel;
- (unsigned char)defaultFallbackForPhysicalKeyboardID:(unsigned char)a0;
- (unsigned char)fallbackForKeyboardIDWithDFRAndEscapeKey:(unsigned char)a0;
- (BOOL)hasKeyboardLayoutIdentifierForInputSourceID:(id)a0 withOptionalInputSourceLanguageCode:(id)a1;
- (void)loadResource;
- (void)showKeyboardLayout;
- (void)updateHeightConstraintWithHeight:(unsigned long long)a0;
- (void)updateTrackpadLabel;

@end
