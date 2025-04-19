@class AFBBufferBuilder;

@interface TRIFBCloudKitTreatmentRecordAssetBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct CloudKitTreatmentRecordAssetBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(unsigned char)a0;
- (void)setTreatmentId:(id)a0;
- (void)setAssetIndex:(unsigned int)a0;
- (void)setHasCkIndex:(BOOL)a0;

@end
