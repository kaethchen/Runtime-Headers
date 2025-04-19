@class MRTouchSet, NSArray, MCAction, NSSet, MRAction, NSObject, MRRenderer;

@interface MRGestureRecognizer : NSObject {
    MRRenderer *_renderer;
    MRAction *_automaticStartAction;
    MRAction *_automaticUpdateAction;
    MRAction *_automaticEndAction;
    MRAction *_automaticCancelAction;
    MRAction *_startAction;
    MRAction *_updateAction;
    MRAction *_endAction;
    MRAction *_cancelAction;
    MRTouchSet *_touchSet;
    struct CGPoint { double x; double y; } _centroidStartLocation;
    struct CGPoint { double x; double y; } _centroidLocation;
    struct CGPoint { double x; double y; } _previousCentroidLocation;
    struct CGPoint { double x; double y; } _offsetFromCentroid;
    double _scale;
    double _previousScale;
    double _ratioFromScale;
    double _rotation;
    double _previousRotation;
    double _offsetFromRotation;
    double _startTime;
    double _hitTime;
    double _previousHitTime;
}

@property (retain) MCAction *startAction;
@property (retain) MCAction *updateAction;
@property (retain) MCAction *endAction;
@property (retain) MCAction *cancelAction;
@property (readonly) NSObject *sender;
@property (retain) NSArray *matrixChain;
@property (nonatomic) int state;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) double referenceScale;
@property (readonly) NSSet *touches;
@property (nonatomic) unsigned char requiredTouchCount;
@property (nonatomic) double score;

- (id)description;
- (void)cleanup;
- (void)abort;
- (void)recognize;
- (void)_sendAction:(id)a0;
- (void)touchEnded:(id)a0;
- (void)_sendEndActions;
- (void)_addSpecificObjectToAction:(id)a0;
- (struct CGPoint { double x0; double x1; })_localPointFromTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_sendCancelActions;
- (void)_sendStartActions;
- (void)_sendUpdateActions;
- (id)initWithRenderer:(id)a0 startAction:(id)a1 andSender:(id)a2;
- (void)touchBegan:(id)a0;
- (void)touchMoved:(id)a0;

@end
