@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)components;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1 underlyingResult:(void *)a2;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (unsigned long long)resultType;

@end
