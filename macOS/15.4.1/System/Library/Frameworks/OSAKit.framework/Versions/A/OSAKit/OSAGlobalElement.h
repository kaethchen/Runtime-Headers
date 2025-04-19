@class NSMutableArray;

@interface OSAGlobalElement : OSAScriptElement {
    NSMutableArray *_globals;
}

+ (id)elementWithGlobal:(id)a0;
+ (id)elementWithGlobal:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)elementWithGlobals:(id)a0;
+ (id)elementWithGlobals:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)dealloc;
- (id)title;
- (id)globals;
- (void)setGlobals:(id)a0;
- (id)global;
- (void)setGlobal:(id)a0;
- (id)initWithGlobal:(id)a0;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned long long)a1;
- (id)initWithGlobal:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithGlobals:(id)a0;
- (id)initWithGlobals:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
