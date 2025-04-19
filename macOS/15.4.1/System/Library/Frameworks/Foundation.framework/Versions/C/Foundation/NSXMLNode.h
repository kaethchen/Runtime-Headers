@class NSString, NSArray, NSXMLDocument;

@interface NSXMLNode : NSObject <NSCopying> {
    NSXMLNode *_parent;
    id _objectValue;
    unsigned char _kind : 4;
    unsigned int _index : 28;
    int _private;
}

@property (readonly) unsigned long long kind;
@property (copy) NSString *name;
@property (retain) id objectValue;
@property (copy) NSString *stringValue;
@property (readonly) unsigned long long index;
@property (readonly) unsigned long long level;
@property (readonly, retain) NSXMLDocument *rootDocument;
@property (readonly, copy) NSXMLNode *parent;
@property (readonly) unsigned long long childCount;
@property (readonly, copy) NSArray *children;
@property (readonly, copy) NSXMLNode *previousSibling;
@property (readonly, copy) NSXMLNode *nextSibling;
@property (readonly, copy) NSXMLNode *previousNode;
@property (readonly, copy) NSXMLNode *nextNode;
@property (readonly, copy) NSString *XPath;
@property (readonly, copy) NSString *localName;
@property (readonly, copy) NSString *prefix;
@property (copy) NSString *URI;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *XMLString;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)DTDNodeWithXMLString:(id)a0;
+ (void)_escapeCharacters:(const unsigned short *)a0 countOfCharacters:(unsigned long long)a1 inString:(id)a2 appendingToString:(id)a3;
+ (id)_alloc;
+ (id)_contentsOfHTMLData:(id)a0 encoding:(id)a1 strippingTagsSeparatedByString:(id)a2;
+ (id)_contentsOfHTMLData:(id)a0 strippingTagsSeparatedByString:(id)a1;
+ (void)_escapeHTMLAttributeCharacters:(id)a0 withQuote:(unsigned short)a1 appendingToString:(id)a2;
+ (BOOL)_htmlFromTidyNode:(void *)a0 tidyDoc:(void *)a1 appendingToString:(id)a2;
+ (id)_nodeFromLibXML2Node:(void *)a0;
+ (id)_tidyHTMLBody:(id)a0;
+ (id)attributeWithLocalName:(id)a0 URI:(id)a1 stringValue:(id)a2;
+ (id)attributeWithName:(id)a0 URI:(id)a1 stringValue:(id)a2;
+ (id)attributeWithName:(id)a0 stringValue:(id)a1;
+ (id)commentWithStringValue:(id)a0;
+ (id)document;
+ (id)documentWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)documentWithRootElement:(id)a0;
+ (id)elementWithLocalName:(id)a0 URI:(id)a1;
+ (id)elementWithName:(id)a0;
+ (id)elementWithName:(id)a0 URI:(id)a1;
+ (id)elementWithName:(id)a0 children:(id)a1 attributes:(id)a2;
+ (id)elementWithName:(id)a0 stringValue:(id)a1;
+ (id)localNameForName:(id)a0;
+ (id)namespaceWithName:(id)a0 stringValue:(id)a1;
+ (id)predefinedNamespaceForPrefix:(id)a0;
+ (id)prefixForName:(id)a0;
+ (id)processingInstructionWithName:(id)a0 stringValue:(id)a1;
+ (id)textWithStringValue:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)detach;
- (id)XMLStringWithOptions:(unsigned long long)a0;
- (id)XMLData;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)_setIndex:(unsigned long long)a0;
- (void)_setKind:(unsigned long long)a0;
- (void)_setParent:(id)a0;
- (void)_setURI:(id)a0;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (id)childAtIndex:(unsigned long long)a0;
- (id)initWithKind:(unsigned long long)a0;
- (id)initWithKind:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)nodesForXPath:(id)a0 error:(id *)a1;
- (id)objectsForXQuery:(id)a0 constants:(id)a1 error:(id *)a2;
- (id)objectsForXQuery:(id)a0 error:(id *)a1;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;

@end
