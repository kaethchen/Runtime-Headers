@interface NSSandboxProfile : NSObject

@property (readonly) struct { char *x0; char *x1; unsigned long long x2; } *profile;

+ (id)sandboxProfile:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;

- (void)dealloc;
- (id)initWithSandboxProfile:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;

@end
