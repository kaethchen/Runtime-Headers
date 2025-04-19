@class NSString;

@interface NSXMLFidelityElement : NSXMLElement {
    unsigned long long _fidelity;
    NSString *_startWhitespace;
    NSString *_endWhitespace;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)_canonicalXMLStringPreservingComments:(BOOL)a0 namespaceString:(id)a1 relationships:(id)a2;
- (BOOL)_setPrefix:(id)a0;
- (unsigned long long)fidelity;
- (void)setEndWhitespace:(id)a0;
- (void)setFidelity:(unsigned long long)a0;
- (void)setWhitespace:(id)a0;

@end
