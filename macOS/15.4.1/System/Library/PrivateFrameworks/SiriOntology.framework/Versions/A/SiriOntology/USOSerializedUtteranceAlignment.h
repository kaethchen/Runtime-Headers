@class NSArray;

@interface USOSerializedUtteranceAlignment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long nodeIndex;
@property unsigned int asrHypothesisIndex;
@property (retain, nonatomic) NSArray *spans;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNodeIndex:(unsigned long long)a0 asrHypothesisIndex:(unsigned int)a1 spans:(id)a2;

@end
