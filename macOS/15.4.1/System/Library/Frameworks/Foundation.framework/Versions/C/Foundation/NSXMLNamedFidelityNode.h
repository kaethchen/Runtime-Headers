@class NSString, NSMutableArray;

@interface NSXMLNamedFidelityNode : NSXMLNamedNode {
    unsigned long long _fidelity;
    NSString *_whitespace;
    NSMutableArray *_ranges;
    NSMutableArray *_names;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (BOOL)_setPrefix:(id)a0;
- (void)addEntity:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)fidelity;
- (id)initWithKind:(unsigned long long)a0;
- (id)objectValue;
- (void)setFidelity:(unsigned long long)a0;
- (void)setNames:(id)a0;
- (void)setRanges:(id)a0;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;
- (void)setWhitespace:(id)a0;

@end
