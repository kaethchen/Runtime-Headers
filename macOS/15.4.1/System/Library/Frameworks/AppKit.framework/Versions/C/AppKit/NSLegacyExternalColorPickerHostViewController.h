@class NSString, NSColorPanel, NSURL, NSColor;

@interface NSLegacyExternalColorPickerHostViewController : NSViewController <NSLegacyExternalColorPickerHostViewController, NSRemoteViewDelegate, NSColorPickingInternal> {
    NSURL *_bundleURL;
    unsigned long long _initialMask;
    BOOL _firstLoad;
    NSColorPanel *_colorPanel;
    BOOL _isActivePicker;
    int _architecture;
}

@property (copy, setter=_setCurrentColor:) NSColor *_currentColor;
@property (readonly) BOOL shouldRetainExportedObject;
@property BOOL isActivePicker;
@property (readonly, copy) NSString *pickerIdentifier;

+ (void)warmupForArchitecture:(int)a0;

- (void)dealloc;
- (id)description;
- (long long)currentMode;
- (void)setMode:(long long)a0;
- (id)exportedInterface;
- (void)setColor:(id)a0;
- (id)provideNewView:(BOOL)a0;
- (void)alphaControlAddedOrRemoved:(id)a0;
- (void)attachColorList:(id)a0;
- (id)buttonToolTip;
- (void)detachColorList:(id)a0;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1 bundleURL:(id)a2 architecture:(int)a3;
- (void)insertNewButtonImage:(id)a0 in:(id)a1;
- (void)loadView;
- (struct CGSize { double x0; double x1; })minContentSize;
- (void)pickColor:(id)a0;
- (void)preparePickerWithSandboxExtension:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)provideNewButtonImage;
- (id)remoteView;
- (id)serviceViewControllerInterface;
- (BOOL)supportsMode:(long long)a0;
- (void)viewDidInvalidate:(id)a0;
- (void)viewSizeChanged:(id)a0;

@end
