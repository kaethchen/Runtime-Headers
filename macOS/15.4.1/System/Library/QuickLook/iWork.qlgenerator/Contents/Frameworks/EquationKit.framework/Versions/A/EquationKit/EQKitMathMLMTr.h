@class NSString, NSArray;

@interface EQKitMathMLMTr : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTr> {
    NSArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithChildren:(id)a0;
- (id)layoutStyleNode;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (id)initWithChildren:(id)a0 node:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
- (BOOL)isBaseFontNameUsed;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (const void *)mathMLAttributes;
- (id)schemataChildren;

@end
