@interface DDXMLDocument : DDXMLNode

+ (id)nodeWithPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;

- (id)XMLData;
- (id)XMLDataWithOptions:(unsigned long long)a0;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithXMLString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)rootElement;
- (id)initWithCheckedPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;
- (id)initWithUncheckedPrimitive:(struct _xmlKind { void *x0; int x1; } *)a0;

@end
