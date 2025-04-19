@interface WKLayerHostView : NSView

@property (nonatomic) unsigned int contextID;

- (BOOL)clipsToBounds;
- (id)layerHost;
- (id)makeBackingLayer;

@end
