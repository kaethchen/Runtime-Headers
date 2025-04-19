@interface VCPCNNFlattenBlock : VCPCNNBlock {
    int _chunk;
}

- (id)initWithParameters:(int)a0;
- (int)forward;
- (int)constructBlock:(id)a0 context:(id)a1;

@end
