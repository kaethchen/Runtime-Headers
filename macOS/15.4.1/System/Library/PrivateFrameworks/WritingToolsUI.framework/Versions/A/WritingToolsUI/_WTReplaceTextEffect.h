@class NSString, NSArray, RBLayer, CADisplayLink, CALayer, _WTColor, RBDisplayListInterpolator;

@interface _WTReplaceTextEffect : _WTTextEffect <RBLayerDelegate> {
    id /* block */ completion;
    id /* block */ preCompletion;
}

@property (retain) RBLayer *rootMask;
@property (retain) RBLayer *textContent;
@property (retain) CALayer *textContentMask;
@property (retain) CALayer *nonCandidateTextContent;
@property (retain) CALayer *nonCandidateTextContentMask;
@property (retain) CADisplayLink *displayLink;
@property double startTime;
@property (retain) RBDisplayListInterpolator *interpolator;
@property (retain) RBDisplayListInterpolator *colorFillInterpolator;
@property (readonly, nonatomic) NSArray *coolPalette;
@property (readonly, nonatomic) NSArray *warmPalette;
@property BOOL animateRemovalWhenDone;
@property BOOL isDestination;
@property BOOL highlightsCandidateRects;
@property (copy, nonatomic) _WTColor *destinationColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithChunk:(id)a0 effectView:(id)a1;
- (void)invalidate:(BOOL)a0;
- (void)setCompletion:(id /* block */)a0;
- (id /* block */)completion;
- (void)RBLayer:(id)a0 draw:(id)a1;
- (void)setPreCompletion:(id /* block */)a0;
- (void)_alignFrames;
- (BOOL)_isInClipView;
- (id /* block */)preCompletion;
- (void)prepareWithCoolPalette:(id)a0 warmPalette:(id)a1;
- (double)sweepDuration;
- (void)updateEffectWith:(id)a0;

@end
