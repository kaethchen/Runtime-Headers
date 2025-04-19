@class AXMTextDetectorNode, AXMIconClassDetectorNode, AXMScreenCaptureNode, AXMImageNode, AXMBrailleEdgesDetectorNode;

@interface AXMAXElementVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMScreenCaptureNode *captureNode;
@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMTextDetectorNode *textDetector;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (weak, nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
