@class NSString, NSDocument, NSView;
@protocol NSSharingServiceDelegate;

@interface _NSDocumentSharingServiceDelegate : NSObject <NSCloudSharingServiceDelegate> {
    NSDocument *_document;
    id<NSSharingServiceDelegate> _delegate;
    id /* block */ _completionHandler;
    NSView *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)anchoringViewForSharingService:(id)a0 showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 preferredEdge:(unsigned long long *)a2;
- (id)initWithAnchoringView:(id)a0;
- (id)initWithDocument:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)sharingService:(id)a0 didCompleteForItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;

@end
