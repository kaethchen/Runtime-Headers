@class NSString, NSDictionary, NSURL, QLRequestSession, NSUUID, NSMutableDictionary;

@interface QLRequest : NSObject

@property unsigned int replyPort;
@property struct { unsigned int val[8]; } token;
@property (retain) NSString *sandboxToken;
@property (retain) NSDictionary *options;
@property (retain) NSString *appearanceName;
@property BOOL fallbackAsDark;
@property (retain) NSURL *requestedURL;
@property (retain) NSURL *realURL;
@property (retain) NSURL *resolvedURL;
@property (readonly) BOOL isThumbnailRequest;
@property (readonly) BOOL isPreviewRequest;
@property BOOL cancelled;
@property int discardError;
@property (copy, nonatomic) id /* block */ generationWillStartBlock;
@property (copy, nonatomic) id /* block */ replyCreatedWithBitmapBlock;
@property (retain) QLRequestSession *session;
@property (retain) NSUUID *uuid;
@property (retain) id mangledID;
@property (nonatomic) struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; double x21; struct CGSize { double x0; double x1; } x22; unsigned char x23; void *x24; void *x25; int x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; } *generator;
@property (nonatomic) struct CGContext { } *context;
@property BOOL generatorComputed;
@property (retain) NSMutableDictionary *properties;
@property (retain) NSString *contentTypeUTI;
@property (readonly) NSURL *url;
@property void /* function */ *contextMemoryDiscard;
@property const void *documentObject;
@property struct { long long version; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; } callbacks;
@property unsigned long long weight;
@property BOOL disableConcurrency;
@property BOOL useResolvedURLInGenerator;
@property BOOL didReply;
@property BOOL ubiquitousComputed;
@property BOOL fileIsDataLess;
@property BOOL fileMightBeUbiquitous;
@property (readonly) struct __CFBundle { } *generatorBundle;
@property (readonly) BOOL hasGeneratorFunction;
@property (readonly) BOOL generatorShouldRunInSatellite;
@property (readonly) BOOL needsAccessToExternalResources;
@property (readonly) int generatorArchitectureForSatellite;
@property (readonly) struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *requestRef;

- (void)dealloc;
- (void).cxx_destruct;
- (void)teardown;
- (void)cancelGenerator;
- (BOOL)checkAccess;
- (void)cleanupAfterException:(id)a0;
- (void)fillUUID:(unsigned char[16])a0;
- (void)fillXPCRepresentation:(id)a0 messageType:(int)a1 context:(struct CGContext { } *)a2 data:(unsigned long long)a3 dataLength:(unsigned long long)a4;
- (id)initWithRequestRef:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0 url:(id)a1 replyPort:(unsigned int)a2 options:(id)a3 contentType:(id)a4 uuid:(id)a5 appearanceName:(id)a6 fallbackAsDark:(BOOL)a7 generator:(struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; double x21; struct CGSize { double x0; double x1; } x22; unsigned char x23; void *x24; void *x25; int x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; } *)a8 generatorComputed:(BOOL)a9 auditToken:(struct { unsigned int x0[8]; } *)a10 sandboxToken:(id)a11;
- (int)replyWithDiscardErrorAvoidRetry:(BOOL)a0;
- (BOOL)sendWillStart;
- (void)updateWithXPCRepresentation:(id)a0 outData:(unsigned long long *)a1 outDataLength:(unsigned long long *)a2;

@end
