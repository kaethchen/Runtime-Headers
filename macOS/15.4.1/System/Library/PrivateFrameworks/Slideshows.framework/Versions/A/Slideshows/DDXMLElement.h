@interface DDXMLElement : DDXMLNode

+ (id)elementWithName:(id)a0 xmlns:(id)a1;
+ (id)nodeWithPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;
+ (id)resolveNamespaceForPrefix:(id)a0 atNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
+ (id)resolvePrefixForURI:(id)a0 atNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;

- (id)initWithName:(id)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (void)addAttribute:(id)a0;
- (void)addChild:(id)a0;
- (void)addNamespace:(id)a0;
- (id)attributeForName:(id)a0;
- (id)elementsForLocalName:(id)a0 URI:(id)a1;
- (id)elementsForName:(id)a0;
- (id)initWithName:(id)a0 URI:(id)a1;
- (id)initWithName:(id)a0 stringValue:(id)a1;
- (id)initWithXMLString:(id)a0 error:(id *)a1;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)namespaceForPrefix:(id)a0;
- (id)namespaces;
- (void)removeAttributeForName:(id)a0;
- (void)removeChildAtIndex:(unsigned long long)a0;
- (void)removeNamespaceForPrefix:(id)a0;
- (id)resolveNamespaceForName:(id)a0;
- (id)resolvePrefixForNamespaceURI:(id)a0;
- (void)setChildren:(id)a0;
- (void)setNamespaces:(id)a0;
- (void)removeChild:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)removeAttribute:(struct _xmlAttr { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlAttr *x6; struct _xmlAttr *x7; struct _xmlDoc *x8; struct _xmlNs *x9; int x10; void *x11; } *)a0;
- (id)attributesAsDictionary;
- (void)removeNamespace:(struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *)a0;
- (void)removeAllChildren;
- (id)elementForName:(id)a0;
- (void)addAttributeWithName:(id)a0 stringValue:(id)a1;
- (id)elementForName:(id)a0 xmlns:(id)a1;
- (id)elementsWithName:(id)a0 uri:(id)a1;
- (id)initWithCheckedPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;
- (id)initWithUncheckedPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;
- (void)removeAllAttributes;
- (void)removeAllNamespaces;
- (void)setXmlns:(id)a0;
- (id)xmlns;

@end
