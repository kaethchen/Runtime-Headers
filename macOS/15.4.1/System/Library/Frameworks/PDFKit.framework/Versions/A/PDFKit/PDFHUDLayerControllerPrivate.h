@class NSArray, NSString, NSMutableDictionary, CALayer;
@protocol PDFHUDLayerControllerDelegate;

@interface PDFHUDLayerControllerPrivate : NSObject {
    NSArray *controlArray;
    BOOL mouseDown;
    NSString *activeControl;
    CALayer *activeLayer;
    struct CGSize { double width; double height; } frameSize;
    CALayer *layer;
    id<PDFHUDLayerControllerDelegate> delegate;
    NSMutableDictionary *cachedIcons;
    double deviceScaleFactor;
}

- (void).cxx_destruct;

@end
