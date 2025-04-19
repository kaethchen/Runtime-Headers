@class NSString, VTFrameProcessorFrame;

@interface VTTestProcessorParameters : NSObject <VTFrameProcessorParameters>

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *nextFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *previousFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 previousFrame:(id)a2 destinationFrame:(id)a3;

@end
