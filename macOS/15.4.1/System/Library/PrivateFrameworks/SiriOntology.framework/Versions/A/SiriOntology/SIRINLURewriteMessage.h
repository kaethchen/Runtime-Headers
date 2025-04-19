@class NSString;

@interface SIRINLURewriteMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int rewriteType;
@property (retain, nonatomic) NSString *rewrittenUtterance;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(int)a0 utterance:(id)a1;

@end
