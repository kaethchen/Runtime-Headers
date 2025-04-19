@interface _WTTextRangeChunk : _WTTextChunk

@property struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
