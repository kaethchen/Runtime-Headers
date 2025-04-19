@class NSString, NSArray, NSMutableDictionary;

@interface NSXMLDTD : NSXMLNode {
    NSString *_name;
    NSString *_publicID;
    NSString *_systemID;
    NSArray *_children;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_elements;
    NSMutableDictionary *_notations;
    NSMutableDictionary *_attributes;
    NSString *_original;
    BOOL _modified;
}

@property (copy) NSString *publicID;
@property (copy) NSString *systemID;

+ (void)_initializeDTD:(id)a0 fromTidyNode:(struct _TidyNode { int x0; } *)a1;
+ (void)_initializePredefinedEntities;
+ (id)_nodeFromLibXML2Node:(void *)a0;
+ (id)predefinedEntityDeclarationForName:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)countOfChildren;
- (void)insertObject:(id)a0 inChildrenAtIndex:(unsigned long long)a1;
- (void)_addLibxml2TreeRepresentationToDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 context:(struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } *)a1;
- (id)_DTDString;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)_children;
- (id)_elementAttributeRelationship;
- (void)_internalXMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)_renameChild:(id)a0 toName:(id)a1;
- (void)_setDTDString:(id)a0;
- (void)_setModified:(BOOL)a0;
- (void)addChild:(id)a0;
- (id)attributeDeclarationForName:(id)a0 elementName:(id)a1;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (id)childAtIndex:(unsigned long long)a0;
- (unsigned long long)childCount;
- (id)children;
- (id)elementDeclarationForName:(id)a0;
- (id)entityDeclarationForName:(id)a0;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithKind:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildren:(id)a0 atIndex:(unsigned long long)a1;
- (id)notationDeclarationForName:(id)a0;
- (id)objectInChildrenAtIndex:(unsigned long long)a0;
- (void)removeChildAtIndex:(unsigned long long)a0;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)a0;
- (void)replaceChildAtIndex:(unsigned long long)a0 withNode:(id)a1;
- (void)replaceObjectInChildrenAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setChildren:(id)a0;

@end
