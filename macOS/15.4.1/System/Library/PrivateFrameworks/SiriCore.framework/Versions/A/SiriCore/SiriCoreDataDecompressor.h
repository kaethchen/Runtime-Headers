@interface SiriCoreDataDecompressor : NSObject

- (id)decompressedDataForBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)decompressedDataForData:(id)a0 error:(id *)a1;

@end
