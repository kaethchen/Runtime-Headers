@class NSArray;

@interface GDKnosisDebug : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int indexCallCount;
@property (readonly, copy, nonatomic) NSArray *execSteps;
@property (readonly, copy, nonatomic) NSArray *messages;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIndexCallCount:(int)a0 execSteps:(id)a1 messages:(id)a2;

@end
