@class NSURL;

@interface FTSEnumerator : NSEnumerator {
    struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *fts;
    NSURL *original;
    id /* block */ errHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)nextObject;
- (id)initWithURL:(id)a0 withErrorHandler:(id /* block */)a1;
- (BOOL)shouldContinueWith:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0 withError:(int)a1;

@end
