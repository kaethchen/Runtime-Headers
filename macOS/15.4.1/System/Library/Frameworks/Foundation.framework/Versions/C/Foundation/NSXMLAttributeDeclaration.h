@class NSString, NSMutableArray;

@interface NSXMLAttributeDeclaration : NSXMLDTDNode {
    NSString *_elementName;
    unsigned long long _defaultType;
    NSMutableArray *_enumerations;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)addEnumeration:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)setDefaultType:(unsigned long long)a0;
- (void)setElementName:(id)a0;
- (void)_addToLibxml2TreeRepresentationWithDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 dtd:(struct _xmlDtd { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDoc *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; void *x9; void *x10; void *x11; void *x12; char *x13; char *x14; void *x15; } *)a1 context:(struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } *)a2;
- (unsigned long long)defaultType;
- (id)elementName;
- (id)enumerations;

@end
