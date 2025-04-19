@class QLPreviewView, NSString, QLInlinePreviewController, NSObject;
@protocol TDesktopInlinePreviewDataSource;

@interface FI_TDesktopInlinePreviewController : NSObject <QLInlinePreviewDelegate, TTrackingAreaOwnerProtocol> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct TNSWeakPtr<NSObject<TDesktopInlinePreviewDataSource>> { NSObject<TDesktopInlinePreviewDataSource> *fWeakObject; } _weakDataSource;
    QLInlinePreviewController *_rolloverInlinePreviewController;
    QLInlinePreviewController *_playInlinePreviewController;
    QLInlinePreviewController *_mouseInlinePreviewController;
}

@property (weak, nonatomic) NSObject<TDesktopInlinePreviewDataSource> *dataSource;
@property (readonly, retain, nonatomic) QLPreviewView *sharedPreviewView;
@property (nonatomic) BOOL inlinePreviewEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)selectionDidChange:(id)a0;
- (void)inlinePreview:(id)a0 didChangeToState:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreview:(id)a0 contentFrameForPreviewItem:(id)a1;
- (int)inlinePreview:(id)a0 expectedModeForPreviewItem:(id)a1 flavor:(int *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreview:(id)a0 frameForPreviewItem:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreview:(id)a0 rolloverFrameForPreviewItem:(id)a1;
- (void)inlinePreview:(id)a0 willLoadPreviewItem:(id)a1;
- (id)_inlinePreviewControllerOfItem:(id)a0;
- (BOOL)_allowInlinePreviewForItem:(id)a0;
- (id)_hostingViewForEvent:(id)a0;
- (BOOL)_inlinePreviewEnabledWhileLocked;
- (int)_inlinePreviewModeForItem:(id)a0 outIconFlavor:(int *)a1;
- (id)_itemForEvent:(id)a0;
- (void)_startInlinePreview;
- (void)_stopInlinePreview;
- (void)_swapInlinePreviewControllers;
- (void)stopInlinePreviewForItem:(id)a0;

@end
