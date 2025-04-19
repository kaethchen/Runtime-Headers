@class NSMutableString, NSData, NSURL, NSXMLNode;

@interface NSXMLSAXParser : NSObject {
    BOOL _hadError;
    BOOL _afterEntityLookup;
    BOOL _isSingleDTDNode;
    long long _parserFlags;
    unsigned long long _fidelityMask;
    struct _xmlSAXHandler { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; unsigned int x27; void *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; } *_saxHandler;
    struct _xmlParserCtxt { struct _xmlSAXHandler *x0; void *x1; struct _xmlDoc *x2; int x3; int x4; char *x5; char *x6; int x7; int x8; struct _xmlParserInput *x9; int x10; int x11; struct _xmlParserInput **x12; struct _xmlNode *x13; int x14; int x15; struct _xmlNode **x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo *x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } x25; int x26; int x27; char *x28; char *x29; int x30; int x31; char **x32; long long x33; long long x34; int x35; int x36; int x37; char *x38; char *x39; char *x40; int *x41; int x42; int x43; int *x44; int x45; struct _xmlParserInput *x46; int x47; int x48; int x49; int x50; void *x51; int x52; int x53; void *x54; int x55; int x56; struct _xmlDict *x57; char **x58; int x59; int x60; char *x61; char *x62; char *x63; int x64; int x65; int x66; char **x67; int *x68; struct _xmlStartTag *x69; struct _xmlHashTable *x70; struct _xmlHashTable *x71; int x72; int x73; int x74; int x75; struct _xmlNode *x76; int x77; struct _xmlAttr *x78; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo *x83; int x84; int x85; struct _xmlParserNodeInfo *x86; int x87; unsigned long long x88; } *_context;
    NSData *_data;
    NSURL *_url;
    NSXMLNode *_root;
    NSXMLNode *_current;
    id *_error;
    NSMutableString *_content;
    NSMutableString *_whitespace;
    NSXMLNode *_text;
}

- (void)dealloc;
- (struct _xmlParserCtxt { struct _xmlSAXHandler *x0; void *x1; struct _xmlDoc *x2; int x3; int x4; char *x5; char *x6; int x7; int x8; struct _xmlParserInput *x9; int x10; int x11; struct _xmlParserInput **x12; struct _xmlNode *x13; int x14; int x15; struct _xmlNode **x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo *x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } x25; int x26; int x27; char *x28; char *x29; int x30; int x31; char **x32; long long x33; long long x34; int x35; int x36; int x37; char *x38; char *x39; char *x40; int *x41; int x42; int x43; int *x44; int x45; struct _xmlParserInput *x46; int x47; int x48; int x49; int x50; void *x51; int x52; int x53; void *x54; int x55; int x56; struct _xmlDict *x57; char **x58; int x59; int x60; char *x61; char *x62; char *x63; int x64; int x65; int x66; char **x67; int *x68; struct _xmlStartTag *x69; struct _xmlHashTable *x70; struct _xmlHashTable *x71; int x72; int x73; int x74; int x75; struct _xmlNode *x76; int x77; struct _xmlAttr *x78; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo *x83; int x84; int x85; struct _xmlParserNodeInfo *x86; int x87; unsigned long long x88; } *)context;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)content;
- (BOOL)isSingleDTDNode;
- (void)_addContent;
- (void)_addEntity:(id)a0;
- (id)current;
- (void)_addWhitespace;
- (id)_createElementContent:(struct _xmlElementContent { int x0; int x1; char *x2; struct _xmlElementContent *x3; struct _xmlElementContent *x4; struct _xmlElementContent *x5; char *x6; } *)a0;
- (BOOL)afterEntityLookup;
- (unsigned long long)fidelityMask;
- (id)initWithData:(id)a0 isSingleDTDNode:(BOOL)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)parse;
- (id)root;
- (void)setAfterEntityLookup:(BOOL)a0;
- (void)setContent:(id)a0;
- (void)setCurrent:(id)a0;
- (void)setError:(long long)a0 info:(id)a1 fatal:(BOOL)a2;
- (void)setRoot:(id)a0;
- (void)setWhitespace:(id)a0;
- (id)whitespace;

@end
