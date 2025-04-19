@class NSString;
@protocol MTLToolsRetainingContainer, MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, nonatomic) id<MTLToolsRetainingContainer> commandBuffer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushDebugGroup:(id)a0;
- (void)addRetainedObject:(id)a0;
- (void)endEncoding;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)a0 parallelRenderCommandEncoder:(id)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)insertDebugSignpost:(id)a0;
- (unsigned long long)numThisCommand;
- (void)popDebugGroup;

@end
