@class LNValue, NSError;

@interface LNStageContextResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LNValue *result;
@property (retain, nonatomic) NSError *error;

+ (id)xpcClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 error:(id)a1;

@end
