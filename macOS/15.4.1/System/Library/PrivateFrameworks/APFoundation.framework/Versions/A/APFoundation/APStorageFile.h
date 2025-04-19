@class NSString, NSURL;

@interface APStorageFile : NSObject

@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *fp;
@property (nonatomic) BOOL verbose;
@property (readonly, nonatomic) NSString *loggablePath;
@property (readonly, nonatomic) NSURL *fileURL;

+ (struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)_constructFileForURL:(id)a0 forMode:(char *)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)allObjects;
- (void)close;
- (id)nextObject;
- (id)_initForWritingFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 forURL:(id)a1 loggablePath:(id)a2;
- (id)_initWithFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 forURL:(id)a1 loggablePath:(id)a2;
- (void)_removeCorruptedFile:(id)a0;
- (BOOL)addData:(id)a0 error:(id *)a1;
- (BOOL)addObject:(id)a0 error:(id *)a1;
- (id)initForAppendingAtURL:(id)a0;
- (id)initForMode:(long long)a0 atURL:(id)a1;
- (id)initForReadingAtURL:(id)a0;
- (id)initForWritingAtURL:(id)a0;
- (id)nextObjectData;

@end
