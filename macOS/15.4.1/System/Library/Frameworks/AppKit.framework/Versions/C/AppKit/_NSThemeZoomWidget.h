@class NSString, NSThemeWidgetZoomMenuRemoteView;

@interface _NSThemeZoomWidget : _NSThemeWidget <NSThemeWidgetZoomMenuRemoteViewDelegate> {
    NSThemeWidgetZoomMenuRemoteView *_sidecarButtonPlaceholder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)zoomWidgetInView:(id)a0 withButtonID:(long long)a1 action:(SEL)a2;

- (void)dealloc;
- (void)_removeSidecarButtonPlaceholder;
- (id)_sidecarButtonPlaceholder;
- (void)flagsChanged;
- (void)remoteServiceDidInvalidate:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)worksWhenModal;

@end
