@class NSString;
@protocol NUPipelineNode;

@interface NUMediaNode : NURenderTagNode <NUPipelineNode>

@property (readonly, nonatomic) long long channelType;
@property (retain, nonatomic) id<NUPipelineNode> inputNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bindTo:(id)a0 error:(out id *)a1;
- (id)evaluateDataWithFormat:(id)a0 error:(out id *)a1;

@end
