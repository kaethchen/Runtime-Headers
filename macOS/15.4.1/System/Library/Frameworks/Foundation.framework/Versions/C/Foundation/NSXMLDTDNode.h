@class NSString;

@interface NSXMLDTDNode : NSXMLNode {
    unsigned long long _DTDKind;
    NSString *_name;
    NSString *_notationName;
    NSString *_publicID;
    NSString *_systemID;
}

@property unsigned long long DTDKind;
@property (readonly, getter=isExternal) BOOL external;
@property (copy) NSString *publicID;
@property (copy) NSString *systemID;
@property (copy) NSString *notationName;

+ (id)_nodeFromLibXML2Node:(void *)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)setName:(id)a0;
- (id)XPath;
- (void)setStringValue:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)setObjectValue:(id)a0;
- (void)_addToLibxml2TreeRepresentationWithDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 dtd:(struct _xmlDtd { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDoc *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; void *x9; void *x10; void *x11; void *x12; char *x13; char *x14; void *x15; } *)a1 context:(struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } *)a2;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (id)initWithKind:(unsigned long long)a0;
- (id)initWithKind:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithXMLString:(id)a0;

@end
