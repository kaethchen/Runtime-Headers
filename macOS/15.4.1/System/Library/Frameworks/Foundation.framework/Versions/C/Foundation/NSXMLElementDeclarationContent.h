@class NSString;

@interface NSXMLElementDeclarationContent : NSXMLNode {
    unsigned long long _contentKind;
    unsigned long long _occurrence;
    NSString *_name;
    NSXMLElementDeclarationContent *_leftChild;
    NSXMLElementDeclarationContent *_rightChild;
}

+ (id)createElementContentFromString:(id)a0;
+ (id)createElementContent:(struct _xmlElementContent { int x0; int x1; char *x2; struct _xmlElementContent *x3; struct _xmlElementContent *x4; struct _xmlElementContent *x5; char *x6; } *)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)setName:(id)a0;
- (id)initWithContentKind:(unsigned long long)a0 occurrence:(unsigned long long)a1;
- (void)XMLStringSequenceStarted:(BOOL)a0 choiceStarted:(BOOL)a1 appendingToString:(id)a2;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (unsigned long long)contentKind;
- (id)leftChild;
- (struct _xmlElementContent { int x0; int x1; char *x2; struct _xmlElementContent *x3; struct _xmlElementContent *x4; struct _xmlElementContent *x5; char *x6; } *)libxml2Content;
- (unsigned long long)occurrence;
- (id)rightChild;
- (void)setLeftChild:(id)a0;
- (void)setRightChild:(id)a0;

@end
