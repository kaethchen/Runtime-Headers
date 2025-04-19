@class NSString;

@interface EQKitSourceAttribution : NSObject

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithSource:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
