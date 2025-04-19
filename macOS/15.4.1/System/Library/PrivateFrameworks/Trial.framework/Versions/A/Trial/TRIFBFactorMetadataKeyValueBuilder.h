@class AFBBufferBuilder;

@interface TRIFBFactorMetadataKeyValueBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct FactorMetadataKeyValueBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setKey:(id)a0;
- (void)setVal:(id)a0;

@end
