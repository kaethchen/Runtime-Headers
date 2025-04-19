@class NSString;

@interface CHSynthesisContractViolation : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } locationRange;
@property (readonly, nonatomic) NSString *comment;
@property (readonly, nonatomic) long long kind;

- (void).cxx_destruct;
- (id)initWithLocationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 comment:(id)a1 kind:(long long)a2;

@end
