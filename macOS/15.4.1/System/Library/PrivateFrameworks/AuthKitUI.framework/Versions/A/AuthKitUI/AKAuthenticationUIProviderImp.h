@class NSString, NSImage, AKAuthenticationRVSWindowController, NSWindow;

@interface AKAuthenticationUIProviderImp : NSObject <AKAuthenticationUIProvider> {
    AKAuthenticationRVSWindowController *_windowController;
}

@property (weak, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSImage *displayImage;
@property (nonatomic) BOOL makeSheetCritical;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
