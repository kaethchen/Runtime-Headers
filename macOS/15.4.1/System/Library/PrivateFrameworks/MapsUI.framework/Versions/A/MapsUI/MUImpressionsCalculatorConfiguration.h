@class NSScrollView, NSView, MUImpressionsLogger;

@interface MUImpressionsCalculatorConfiguration : NSObject {
    id /* block */ _containerViewProvider;
    NSView *_cachedContainerView;
}

@property (readonly, weak, nonatomic) NSScrollView *scrollView;
@property (readonly, nonatomic) NSView *hostingContainerView;
@property (readonly, nonatomic) MUImpressionsLogger *logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 contentScrollView:(id)a1 containerViewProvider:(id /* block */)a2;

@end
