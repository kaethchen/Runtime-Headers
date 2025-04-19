@interface SoundAnalysis.SNDSPGraphInfo : SoundAnalysis.SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ includePaths;
    void /* unknown type, empty encoding */ substitutions;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
