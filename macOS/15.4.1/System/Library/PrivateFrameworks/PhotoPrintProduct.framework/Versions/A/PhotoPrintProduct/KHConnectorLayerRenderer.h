@class KHColor, KHAsset;

@interface KHConnectorLayerRenderer : KHLayerRenderer {
    int _connectorStyle;
    KHColor *_bodyStrokeColor;
    float _bodyStrokeWidth;
    float _startGapRadius;
    float _endGapRadius;
    struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } _arrowheadSize;
    long long _arrowheadAssetId;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _arrowheadAnchorPoint;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _arrowheadTipPoint;
    float _arrowheadMinConnectorLength;
    BOOL _curvedUpward;
    KHAsset *_arrowheadAsset;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (id)_arrowheadAsset;
- (void)_renderCurvedArrowConnector:(struct CGContext { } *)a0 environment:(id)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 atScale:(double)a4;
- (void)_renderStraightArrowConnector:(struct CGContext { } *)a0 environment:(id)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 atScale:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
