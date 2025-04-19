@class NSString;

@interface QLThumbnailLegacyGeneratorInfo : NSObject <QLThumbnailGeneratorInfo> {
    struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; double x21; struct CGSize { double x0; double x1; } x22; unsigned char x23; void *x24; void *x25; int x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; } *_generator;
}

@property struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; double x21; struct CGSize { double x0; double x1; } x22; unsigned char x23; void *x24; void *x25; int x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; } *generator;
@property (readonly) BOOL isThumbnailGeneratorDisabled;
@property (readonly) unsigned long long minimumThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)score:(long long)a0;

@end
