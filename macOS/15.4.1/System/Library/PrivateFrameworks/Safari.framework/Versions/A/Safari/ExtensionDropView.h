@protocol ExtensionDropViewDelegate;

@interface ExtensionDropView : NSView

@property (weak, nonatomic) id<ExtensionDropViewDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;

@end
