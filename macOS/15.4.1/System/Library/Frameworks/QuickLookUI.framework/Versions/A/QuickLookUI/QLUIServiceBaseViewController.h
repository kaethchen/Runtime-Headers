@class NSClickGestureRecognizer, QLPreviewDragController, NSString, NSPanGestureRecognizer;
@protocol QLUIServiceBaseHostViewControllerProtocol;

@interface QLUIServiceBaseViewController : NSServiceViewController <NSGestureRecognizerDelegate, QLPreviewDragDelegate, QLUIServiceBaseViewControllerProtocol>

@property (retain) NSPanGestureRecognizer *dragRecognizer;
@property (retain) NSClickGestureRecognizer *doubleClickRecognizer;
@property (retain) QLPreviewDragController *dragController;
@property (getter=isDragging) BOOL dragging;
@property (nonatomic) int previewMode;
@property (readonly) id<QLUIServiceBaseHostViewControllerProtocol> hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)beginDraggingSessionWithItems:(id)a0 event:(id)a1 source:(id)a2;
- (void)copy:(id)a0;
- (void)loadView;
- (void)selectAll:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceFrame;
- (unsigned int)declinedEventMask;
- (id)remoteViewControllerInterface;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderFrame;
- (id)pasteboardWriter;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;
- (id)draggedURL;
- (id)draggingSourceView;
- (void)forwardTextSelectionModification:(id)a0;
- (void)getImageRepresentationWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)receivedDoubleClickGesture:(id)a0;
- (void)receivedDragGesture:(id)a0;
- (BOOL)useLegacyDragging;
- (BOOL)windowSupportsRemoteViews;

@end
