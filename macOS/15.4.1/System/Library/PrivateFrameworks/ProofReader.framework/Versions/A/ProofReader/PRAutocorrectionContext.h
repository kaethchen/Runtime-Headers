@interface PRAutocorrectionContext : NSObject {
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)a0;

- (void)reset;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)addedModifications;
- (id)correction;
- (id)prefixes;
- (id)removedModifications;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (id)completions;
- (void)addInputCharacter:(unsigned short)a0 geometryData:(id)a1;
- (id)guesses;
- (id)currentModifications;
- (unsigned long long)modificationMask;
- (void)setModificationMask:(unsigned long long)a0;
- (double)validSequenceCorrectionThreshold;

@end
