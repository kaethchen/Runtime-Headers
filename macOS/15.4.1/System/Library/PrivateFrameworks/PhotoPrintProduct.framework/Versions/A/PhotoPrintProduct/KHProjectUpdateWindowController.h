@class NSString, KHProjectBundle, NSProgressIndicator, KHThemeProvider;

@interface KHProjectUpdateWindowController : NSWindowController

@property (weak) NSProgressIndicator *progressIndicator;
@property (retain) NSString *statusMessage;
@property (readonly, nonatomic) KHProjectBundle *projectBundle;
@property (readonly, nonatomic) NSString *productCode;
@property (readonly, nonatomic) KHThemeProvider *themeProvider;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)initWithProjectBundle:(id)a0 productCode:(id)a1 themeProvider:(id)a2;

@end
