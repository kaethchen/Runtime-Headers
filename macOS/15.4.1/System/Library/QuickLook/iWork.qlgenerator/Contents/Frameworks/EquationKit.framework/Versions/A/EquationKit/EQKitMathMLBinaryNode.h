@class EQKitMathMLNode;

@interface EQKitMathMLBinaryNode : EQKitMathMLNode <EQKitMathMLNode> {
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
}

- (void)dealloc;
- (id)init;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (BOOL)isBaseFontNameUsed;
- (const void *)mathMLAttributes;

@end
