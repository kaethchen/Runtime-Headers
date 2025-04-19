@class NSString;

@interface BrowserInspectorDelegate : NSObject <_WKInspectorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)inspector:(id)a0 openURLExternally:(id)a1;
- (id)initWithBrowserViewController:(id)a0;

@end
