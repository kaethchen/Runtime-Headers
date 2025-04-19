@class NSString, NSURL;

@interface SandboxExtensionPanelDelegate : NSObject <NSOpenSavePanelDelegate> {
    NSURL *_url;
    NSURL *_referenceURL;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
