@class SLAttributionView, LPLinkMetadata, SLHighlight;

@interface StartPageHighlightViewItemMetadata : NSObject

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLAttributionView *attributionView;

- (void).cxx_destruct;
- (id)initWithLinkMetadata:(id)a0 highlight:(id)a1 attributionView:(id)a2;

@end
