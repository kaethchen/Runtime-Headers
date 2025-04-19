@interface SKGActivityJournalDecoder : NSObject

+ (void)_SKGActivityDump:(id)a0 dst:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
+ (void)_SKGEmbeddingTimelineDump:(id)a0 includePerf:(BOOL)a1 dst:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a2;
+ (void)SKGActivityJournalPlayback:(const char *)a0 block:(id /* block */)a1;
+ (void)_SKGEmbeddingTimeline:(id)a0 includePerf:(BOOL)a1 block:(id /* block */)a2;
+ (void)_SKGEmbeddingXPCTimeline:(id)a0 updater:(id)a1 block:(id /* block */)a2;

@end
