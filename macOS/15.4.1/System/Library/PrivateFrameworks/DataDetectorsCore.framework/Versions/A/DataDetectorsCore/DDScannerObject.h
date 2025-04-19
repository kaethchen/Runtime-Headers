@class NSXPCConnection;

@interface DDScannerObject : NSObject {
    struct __DDScanner { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDLRTable *x1; struct __DDLexer *x2; struct __DDCache *x3; struct __DDTokenCache *x4; struct __DDLexemCache *x5; struct __DDScanQuery *x6; struct __DDScanQuery *x7; struct __DDLookupTable *x8[7]; struct __CFString *x9; double x10; struct __CFData *x11; struct DDSourceMatchCache *x12; struct __CFArray *x13; struct __CFArray *x14; long long x15; long long x16; long long x17; long long x18; char *x19; id /* block */ x20; double x21; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24; unsigned short x25; unsigned char x26; struct __CFLocale *x27; int x28; int x29; unsigned char x30; struct __CFArray *x31; struct __CFArray *x32; } *_scanner;
    int _type;
    BOOL _hasBasicType;
    long long _jobIdentifier;
    NSXPCConnection *_connectionToService;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
