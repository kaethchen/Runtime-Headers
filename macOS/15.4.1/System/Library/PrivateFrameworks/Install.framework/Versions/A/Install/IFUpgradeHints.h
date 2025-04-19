@class NSString;

@interface IFUpgradeHints : NSObject {
    unsigned int _numHints;
    NSString *_lastAccessedHintRegex;
    void *_hints;
}

- (void)dealloc;
- (id)initWithArray:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)stringForFlags:(unsigned int)a0;
- (unsigned int)hintFlagsForPath:(id)a0;
- (id)lastAccessedHintRegex;

@end
