@class PXHUDTimeIntervalVisualization, UXLabel, NSTimer;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    UXLabel *_titleAndTimeLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) PXHUDTimeIntervalVisualization *visualization;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_cleanupTimer;
- (void)_setupTimer;
- (void)_updateTimer;
- (void)_timerTick;
- (void)_updateTitleAndTimeLabel;
- (void)visualizationDidUpdate;

@end
