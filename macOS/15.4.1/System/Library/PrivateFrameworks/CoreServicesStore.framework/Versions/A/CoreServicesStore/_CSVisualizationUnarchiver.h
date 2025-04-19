@protocol _CSVisualizationUnarchiverDelegate;

@interface _CSVisualizationUnarchiver : NSObject {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fileHandle;
    unsigned char _closeWhenDone : 1;
    unsigned char _finishedReading : 1;
}

@property (readonly, weak) id<_CSVisualizationUnarchiverDelegate> delegate;

+ (id)decodingQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForReadingWithFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 closeWhenDone:(BOOL)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)readAllUnitsReturningError:(id *)a0;
- (unsigned long long)fread:(void *)a0 size:(unsigned long long)a1 numberOfItems:(unsigned long long)a2 error:(id *)a3;
- (BOOL)checkAttributeTypes:(id)a0;
- (id)decodeDictionaryFromData:(id)a0;
- (struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)fileHandleToSimDevice:(id)a0 machServiceName:(id)a1 error:(id *)a2;
- (id)initWithDevice:(struct _AMDevice { } *)a0 machServiceName:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithFileHandleToDevice:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 closeWhenDone:(BOOL)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithSimulatorDevice:(id)a0 machServiceName:(id)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)postDelegateMessageForDictionary:(id)a0;
- (void)readAllDataYieldingWithPeriod:(unsigned long long)a0 block:(id /* block */)a1;

@end
