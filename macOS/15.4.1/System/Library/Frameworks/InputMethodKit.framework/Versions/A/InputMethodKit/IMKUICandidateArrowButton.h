@class IMKUIDelimiter;

@interface IMKUICandidateArrowButton : NSButton

@property (retain, nonatomic) IMKUIDelimiter *delimiter;
@property (nonatomic) double fontPointSize;
@property (nonatomic) long long layoutAlignment;
@property (nonatomic) BOOL pointsUpwards;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImageIfPropertiesChanged:(BOOL)a0;

@end
