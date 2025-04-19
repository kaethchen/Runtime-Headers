@interface CoreDiagnostics.CrashPatternInfo : CoreDiagnostics.PatternInfo {
    void /* unknown type, empty encoding */ procName;
    void /* unknown type, empty encoding */ threads;
    void /* unknown type, empty encoding */ usedImages;
}

- (id)init;
- (void).cxx_destruct;

@end
