@class VUINSBarButtonConfiguration;

@interface VUINSBarButtonCustomView : NSView

@property (retain, nonatomic) VUINSBarButtonConfiguration *configuration;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithCustomView:(id)a0;

@end
