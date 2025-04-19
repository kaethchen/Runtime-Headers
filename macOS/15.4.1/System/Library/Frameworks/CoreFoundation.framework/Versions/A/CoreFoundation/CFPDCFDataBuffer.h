@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (struct __CFData { } *)copyCFData;
- (id)copyXPCData;

@end
