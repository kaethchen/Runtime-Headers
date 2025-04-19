@class NSView, NSString, NSImage;
@protocol SiriUIReusableView, SiriUISnippetContainerViewDelegate;

@interface SiriUISnippetContainerView : SiriSharedUIStandardView <NSDraggingSource, NSPasteboardWriting, SiriSharedUISnippetLoadingStateProviding> {
    NSImage *_dragOutImage;
}

@property (retain, nonatomic) NSView *sashView;
@property (retain, nonatomic) NSView *snippetView;
@property (retain, nonatomic) NSView<SiriUIReusableView> *headerView;
@property (retain, nonatomic) NSView<SiriUIReusableView> *footerView;
@property (weak, nonatomic) id<SiriUISnippetContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (BOOL)isLoading;
- (id)dragOutImage;
- (BOOL)suppressVibrantBackground;

@end
