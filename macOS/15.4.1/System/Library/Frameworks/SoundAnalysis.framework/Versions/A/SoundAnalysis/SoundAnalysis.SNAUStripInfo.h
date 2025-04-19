@interface SoundAnalysis.SNAUStripInfo : SoundAnalysis.SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
