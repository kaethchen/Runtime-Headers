@class USOSerializedGraph;

@interface SIRINLUTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *task;
@property (nonatomic) double score;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTask:(id)a0 score:(double)a1;

@end
