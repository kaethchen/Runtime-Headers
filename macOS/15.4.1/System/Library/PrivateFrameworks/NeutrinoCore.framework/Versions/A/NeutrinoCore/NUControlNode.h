@class NSString, NUModel, NUChannelData;
@protocol NUPipelineNode;

@interface NUControlNode : NSObject <NUPipelineNode>

@property (retain, nonatomic) NUControlNode *parentNode;
@property (copy, nonatomic) NSString *childKey;
@property (nonatomic) unsigned long long childIndex;
@property (copy, nonatomic) id defaultValue;
@property (retain, nonatomic) NUChannelData *data;
@property (readonly, nonatomic) NUModel *model;
@property (readonly, nonatomic) long long controlType;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) long long channelType;
@property (retain, nonatomic) id<NUPipelineNode> inputNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithModel:(id)a0;
- (id)evaluate:(out id *)a0;
- (id)childNodeAtIndex:(unsigned long long)a0;
- (BOOL)bindTo:(id)a0 error:(out id *)a1;
- (id)childNodeForKey:(id)a0;
- (id)evaluateDataWithFormat:(id)a0 error:(out id *)a1;

@end
