@interface Human.VerticalFlipKernel : MPSUnaryImageKernel {
    void /* unknown type, empty encoding */ computePipelineState;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (id)initWithCoder:(id)a0 device:(id)a1;

@end
