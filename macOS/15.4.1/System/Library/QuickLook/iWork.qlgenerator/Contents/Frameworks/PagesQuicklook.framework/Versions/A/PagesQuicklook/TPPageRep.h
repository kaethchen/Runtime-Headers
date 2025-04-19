@class TSDFill, NSString, CALayer;

@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate> {
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
}

@property (retain, nonatomic) TSDFill *cachedBackgroundFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)isOpaque;
- (BOOL)masksToBounds;
- (void)willBeRemoved;
- (BOOL)directlyManagesLayerContent;
- (id)backgroundFill;
- (id)bodyReps;
- (BOOL)childRepIsMasterDrawable:(id)a0;
- (BOOL)childRepIsOnDocSetupCanvas:(id)a0;
- (id)colorBehindBodyTextLayer:(id)a0;
- (BOOL)p_pageRequiresHorizontalSeparator;

@end
