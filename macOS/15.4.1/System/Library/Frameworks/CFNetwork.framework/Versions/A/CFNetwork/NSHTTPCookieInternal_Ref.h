@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {
    struct CompactHTTPCookieReference { void /* function */ **x0; struct CompactCookieArray *x1; struct CompactCookieHeader *x2; } *_fromRef;
}

- (void)dealloc;
- (id)init;
- (id)_initWithReference:(const struct CompactCookieArray { } *)a0 index:(long long)a1;
- (struct HTTPCookie { void /* function */ **x0; } *)_inner;

@end
