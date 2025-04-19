@interface SLCollaborationAttributionView : SLRemoteView {
    void /* unknown type, empty encoding */ remoteContentDidLoad;
    void /* unknown type, empty encoding */ highlight;
    void /* unknown type, empty encoding */ placeholderGlyphConfiguration;
    void /* unknown type, empty encoding */ tintColor;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ variant;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ automaticallyAdjustsMaxWidthToFitBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithVariant:(long long)a0;
- (void)updatePlaceHolderSymbolScale:(long long)a0 weight:(double)a1 pointSize:(double)a2;
- (id)initWithHighlight:(id)a0 variant:(long long)a1;
- (id)initWithServiceProxyClass:(Class)a0 maxWidth:(double)a1;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)remoteContentIsLoadedValueChanged;
- (void)renderRemoteContentForLayerContextID:(long long)a0 style:(id)a1 yield:(id /* block */)a2;

@end
