@class NSButton, NSString, NSTouchBar;
@protocol AppControllerTouchBarProviderDelegate;

@interface AppControllerTouchBarProvider : NSObject <NSTouchBarDelegate, NSTouchBarProvider> {
    NSTouchBar *_touchBar;
}

@property (readonly, nonatomic) NSButton *newWindowButton;
@property (readonly, nonatomic) NSButton *newPrivateBrowsingWindowButton;
@property (weak, nonatomic) id<AppControllerTouchBarProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

@end
