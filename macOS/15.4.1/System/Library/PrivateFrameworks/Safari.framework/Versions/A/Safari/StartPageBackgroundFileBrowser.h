@class NSString, NSView;

@interface StartPageBackgroundFileBrowser : NSObject <NSOpenSavePanelDelegate> {
    NSView *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOpenPanel:(id)a0 completion:(id /* block */)a1;

@end
