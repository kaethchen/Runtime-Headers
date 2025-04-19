@class BrowserViewController, NSSharingService, NSString;
@protocol BrowserSharingServiceInvocationDelegate;

@interface BrowserSharingServiceInvocation : NSObject <NSSharingServiceDelegate> {
    id<BrowserSharingServiceInvocationDelegate> _delegate;
}

@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (readonly, nonatomic) NSSharingService *sharingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithSharingService:(id)a0 browserViewController:(id)a1 delegate:(id)a2;

@end
