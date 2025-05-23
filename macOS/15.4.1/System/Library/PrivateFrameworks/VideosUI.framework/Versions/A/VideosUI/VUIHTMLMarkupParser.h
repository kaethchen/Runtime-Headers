@class NSString;
@protocol VUIHTMLMarkupParser;

@interface VUIHTMLMarkupParser : NSObject

@property (nonatomic) struct _xmlParserCtxt { struct _xmlSAXHandler *x0; void *x1; struct _xmlDoc *x2; int x3; int x4; char *x5; char *x6; int x7; int x8; struct _xmlParserInput *x9; int x10; int x11; struct _xmlParserInput **x12; struct _xmlNode *x13; int x14; int x15; struct _xmlNode **x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo *x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } x25; int x26; int x27; char *x28; char *x29; int x30; int x31; char **x32; long long x33; long long x34; int x35; int x36; int x37; char *x38; char *x39; char *x40; int *x41; int x42; int x43; int *x44; int x45; struct _xmlParserInput *x46; int x47; int x48; int x49; int x50; void *x51; int x52; int x53; void *x54; int x55; int x56; struct _xmlDict *x57; char **x58; int x59; int x60; char *x61; char *x62; char *x63; int x64; int x65; int x66; char **x67; int *x68; struct _xmlStartTag *x69; struct _xmlHashTable *x70; struct _xmlHashTable *x71; int x72; int x73; int x74; int x75; struct _xmlNode *x76; int x77; struct _xmlAttr *x78; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo *x83; int x84; int x85; struct _xmlParserNodeInfo *x86; int x87; unsigned long long x88; } *_parserContext;
@property (readonly, copy, nonatomic) NSString *string;
@property (weak, nonatomic) id<VUIHTMLMarkupParser> delegate;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)parse;
- (void)reportErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;
- (void)reportParseError:(struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } *)a0;

@end
