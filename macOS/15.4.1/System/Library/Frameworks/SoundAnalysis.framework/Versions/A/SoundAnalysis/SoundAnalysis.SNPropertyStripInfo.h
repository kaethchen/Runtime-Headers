@interface SoundAnalysis.SNPropertyStripInfo : SoundAnalysis.SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ resourcePath;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
