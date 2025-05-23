@class AXMIconClassDetectorNode, AXMImageNode, AXMBrailleEdgesDetectorNode;

@interface AXMIconVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (weak, nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)classifyImages:(id)a0 withTimeout:(double)a1;

@end
