@class NSString;

@interface DDURLMatch : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_url;
}

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)url;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 url:(id)a1;

@end
