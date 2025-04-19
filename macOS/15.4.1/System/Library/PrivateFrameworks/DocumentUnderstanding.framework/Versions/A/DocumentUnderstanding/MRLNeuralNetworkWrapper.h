@interface MRLNeuralNetworkWrapper : NSObject {
    struct MontrealNeuralNetwork { } *model;
}

- (BOOL)load:(id)a0;
- (id)lstmPredictions:(id)a0 embeddingDimension:(unsigned long long)a1 classSize:(unsigned long long)a2 seqLen:(unsigned long long)a3;

@end
