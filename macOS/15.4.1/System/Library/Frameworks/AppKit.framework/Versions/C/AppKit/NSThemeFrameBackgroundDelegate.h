@class NSString, NSThemeFrame;

@interface NSThemeFrameBackgroundDelegate : NSObject <CALayerDelegate>

@property NSThemeFrame *themeFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
