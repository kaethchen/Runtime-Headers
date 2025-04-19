@class NSArray, NSMutableDictionary;

@interface IKAnimationGroup : NSObject {
    NSArray *_cells;
    float _timeValue;
    NSMutableDictionary *_parameters;
    BOOL _finished;
}

- (void)dealloc;
- (id)init;
- (int)level;
- (BOOL)finished;
- (void)setFinished:(BOOL)a0;
- (id)parameters;
- (id)cells;
- (void)setCells:(id)a0;
- (void)setTimeValue:(float)a0;
- (float)timeValue;
- (void)updateTimeValue:(double)a0;
- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (void)didFinish:(id)a0;
- (BOOL)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (BOOL)needFinalDataForKey:(id)a0;
- (BOOL)needInitialDataForKey:(id)a0;

@end
