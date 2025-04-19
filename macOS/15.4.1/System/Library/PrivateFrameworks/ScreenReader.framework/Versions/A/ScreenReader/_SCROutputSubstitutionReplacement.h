@class NSString;

@interface _SCROutputSubstitutionReplacement : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *replacement;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacement:(id)a1;

@end
