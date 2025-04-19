@class CALayer, CATextLayer, NSString;

@interface PDFPasswordLayerControllerPrivate : NSObject {
    CALayer *layer;
    CATextLayer *instructionLayer;
    CATextLayer *promptLayer;
    NSString *passwordInstruction;
    NSString *passwordPrompt;
}

- (void).cxx_destruct;

@end
