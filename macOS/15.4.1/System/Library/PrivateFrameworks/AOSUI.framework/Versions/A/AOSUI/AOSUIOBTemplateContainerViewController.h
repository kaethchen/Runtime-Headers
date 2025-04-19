@class NSTouchBar, NSString, iCloudTouchBarController;

@interface AOSUIOBTemplateContainerViewController : OBTemplateContainerViewController <NSTouchBarProvider> {
    iCloudTouchBarController *_touchBarController;
}

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear;

@end
