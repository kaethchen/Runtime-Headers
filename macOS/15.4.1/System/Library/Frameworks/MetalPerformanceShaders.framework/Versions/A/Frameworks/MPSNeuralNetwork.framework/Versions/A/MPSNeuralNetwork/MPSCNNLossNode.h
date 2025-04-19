@class MPSNNLabelsNode, MPSCNNLossDescriptor;

@interface MPSCNNLossNode : MPSNNFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}

@property (readonly, retain, nonatomic) MPSNNLabelsNode *inputLabels;

+ (id)nodeWithSource:(id)a0 lossDescriptor:(id)a1;

- (void)dealloc;
- (id)gradientFilterWithSources:(id)a0;
- (id)initWithSource:(id)a0 lossDescriptor:(id)a1;
- (void *)newFilterNode;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;

@end
