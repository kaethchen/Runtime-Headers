@class SAExclave;

@interface SAExclaveBinaryLoadInfo : SAKernelBinaryLoadInfo {
    SAExclave *_exclave;
}

- (void).cxx_destruct;
- (id)exclave;

@end
