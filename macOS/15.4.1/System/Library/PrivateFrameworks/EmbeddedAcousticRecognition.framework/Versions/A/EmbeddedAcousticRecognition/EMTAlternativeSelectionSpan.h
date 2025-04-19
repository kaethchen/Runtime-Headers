@class NSArray;

@interface EMTAlternativeSelectionSpan : NSObject <NSCopying>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } source;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } projection;
@property (readonly, nonatomic) NSArray *alternatives;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSource:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 projection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 alternatives:(id)a2;

@end
