@class NSString, NSView, UINSSceneHostingViewController, NSWindow;
@protocol AVUIViewHosting;

@interface AVUIViewHostMacHelper : NSObject <UINSSceneHostingViewControllerDelegate, AVUIViewHostMacHelper> {
    UINSSceneHostingViewController *_hostingViewController;
    NSWindow *_testingWindow;
}

@property (readonly, nonatomic) NSView *hostView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<AVUIViewHosting> viewHoster;

@end
