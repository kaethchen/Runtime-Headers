@class NSString, NSTouchBar;

@interface AutomationTouchBarProvider : NSObject <NSTouchBarDelegate, NSTouchBarProvider> {
    NSTouchBar *_touchBar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;

@end
