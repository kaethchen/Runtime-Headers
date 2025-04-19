@class NSString, NSArray, NSData, NSXMLElement, NSXMLDTD;

@interface NSXMLDocument : NSXMLNode {
    NSString *_encoding;
    NSString *_version;
    NSXMLDTD *_docType;
    NSArray *_children;
    BOOL _childrenHaveMutated;
    BOOL _standalone;
    char padding[2];
    NSXMLElement *_rootElement;
    NSString *_URI;
    id _extraIvars;
    unsigned long long _fidelityMask;
    unsigned long long _contentKind;
}

@property (copy) NSString *characterEncoding;
@property (copy) NSString *version;
@property (getter=isStandalone) BOOL standalone;
@property unsigned long long documentContentKind;
@property (copy) NSString *MIMEType;
@property (copy) NSXMLDTD *DTD;
@property (readonly, copy) NSData *XMLData;

+ (id)_contentsOfHTMLData:(id)a0 encoding:(id)a1 strippingTagsSeparatedByString:(id)a2;
+ (BOOL)_instancesShouldLoadExternalEntities;
+ (void)_loadXSLT;
+ (id)_nodeFromLibXML2Node:(void *)a0;
+ (void)_setInstancesShouldLoadExternalEntities:(BOOL)a0;
+ (void)_setXMLTagsAllowableInHTML:(id)a0;
+ (Class)replacementClassForClass:(Class)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)countOfChildren;
- (void)insertObject:(id)a0 inChildrenAtIndex:(unsigned long long)a1;
- (id)XMLStringWithOptions:(unsigned long long)a0;
- (id)XPath;
- (void)setRootElement:(id)a0;
- (void)setURI:(id)a0;
- (id)URI;
- (id)XMLDataWithOptions:(unsigned long long)a0;
- (void)setObjectValue:(id)a0;
- (id)_applyStylesheet:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 arguments:(id)a1 error:(id *)a2;
- (id)_canonicalXMLStringPreservingComments:(BOOL)a0 namespaceString:(id)a1 relationships:(id)a2;
- (id)_children;
- (id)_initWithData:(id)a0 encoding:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)_initWithLibTidyDoc:(struct _TidyDoc { int x0; } *)a0 child:(struct _TidyNode { int x0; } *)a1 encoding:(unsigned int)a2;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)_libxml2TreeRepresentation;
- (void)_setContentKindAndEncoding;
- (id)_tidyWithData:(id)a0 error:(id *)a1 isXML:(BOOL)a2 detectedEncoding:(unsigned int)a3;
- (BOOL)_validateWithSchemaAndReturnError:(id *)a0;
- (void)addChild:(id)a0;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (id)childAtIndex:(unsigned long long)a0;
- (unsigned long long)childCount;
- (id)children;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 validExternalEntityURLs:(id)a2 error:(id *)a3;
- (id)initWithKind:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithRootElement:(id)a0;
- (id)initWithXMLString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildren:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectByApplyingXSLT:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)objectByApplyingXSLT:(id)a0 error:(id *)a1;
- (id)objectByApplyingXSLTAtURL:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)objectByApplyingXSLTAtURL:(id)a0 error:(id *)a1;
- (id)objectByApplyingXSLTString:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)objectInChildrenAtIndex:(unsigned long long)a0;
- (id)objectValue;
- (void)removeChildAtIndex:(unsigned long long)a0;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)a0;
- (void)replaceChildAtIndex:(unsigned long long)a0 withNode:(id)a1;
- (void)replaceObjectInChildrenAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)rootElement;
- (void)setChildren:(id)a0;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;
- (BOOL)validateAndReturnError:(id *)a0;

@end
