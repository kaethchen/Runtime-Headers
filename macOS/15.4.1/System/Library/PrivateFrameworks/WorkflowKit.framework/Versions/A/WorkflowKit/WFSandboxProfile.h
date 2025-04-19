@class NSData;

@interface WFSandboxProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *builtin;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProfile:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;
- (void)fill:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;

@end
