@class QCArray, QCInteractionPort;
@protocol QCInteractionPatch;

@interface QCRenderingPatch : QCPatch {
    QCInteractionPort *_inputInteraction;
    QCArray *_dod;
    QCArray *_previousDod;
    QCArray *_dodNeedsUpdate;
    id<QCInteractionPatch> _savedInteractionPatch;
}

@property (readonly) struct _QCDod { } *dod;
@property struct CGPoint { double x0; double x1; } position;
@property double rotation;
@property double scaleX;
@property double scaleY;
@property (readonly) double depth;
@property (readonly) double renderingDepth;

+ (BOOL)allowsInteraction;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (BOOL)__execute:(double)a0 arguments:(id)a1;
- (void)_invalidateDod;
- (BOOL)_renderAtTime:(double)a0 arguments:(id)a1;
- (BOOL)automaticStateSet:(id)a0;
- (struct _QCDod { } *)createDodForContext:(id)a0;
- (void)finalize_QCRenderingPatch;
- (id)nodeActorForView:(id)a0;

@end
