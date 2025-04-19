@class NSString, _NSExtensionQuickActionInvocationRequestor, _NSQuickAction;

@interface _NSExtensionQuickActionSharingServiceDelegate : NSObject <NSSharingServiceDelegate> {
    _NSQuickAction *_quickAction;
    _NSExtensionQuickActionInvocationRequestor *_requestor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)anchoringViewForSharingService:(id)a0 showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 preferredEdge:(unsigned long long *)a2;
- (id)initWithQuickAction:(id)a0 requestor:(id)a1;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;

@end
