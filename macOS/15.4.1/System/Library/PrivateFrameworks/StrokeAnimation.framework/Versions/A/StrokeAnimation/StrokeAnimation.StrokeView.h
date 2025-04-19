@protocol SAStrokeAnimatingDelegate;

@interface StrokeAnimation.StrokeView : NSView <SAStrokeVisualResponse> {
    void /* unknown type, empty encoding */ animationDelegate;
    void /* unknown type, empty encoding */ animationLayers;
    void /* unknown type, empty encoding */ animationView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ strokeData;
    void /* unknown type, empty encoding */ strokePathInfos;
    void /* unknown type, empty encoding */ pronunciationLabel;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ strokeContourLayer;
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ colorForbackgroundView;
    void /* unknown type, empty encoding */ contourColor;
    void /* unknown type, empty encoding */ backgroundImageUrl;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ timers;
}

@property (nonatomic, retain) id<SAStrokeAnimatingDelegate> interactionDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithData:(id)a0;
- (id)initWith:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)endAnimation;
- (void)startAnimationRepeating:(BOOL)a0;

@end
