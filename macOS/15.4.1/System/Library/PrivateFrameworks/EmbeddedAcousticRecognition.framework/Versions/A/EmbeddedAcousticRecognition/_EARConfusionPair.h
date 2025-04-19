@class NSMutableArray;

@interface _EARConfusionPair : NSObject

@property (nonatomic) long long recognizedTokenStartIndex;
@property (nonatomic) long long correctedTokenStartIndex;
@property (copy, nonatomic) NSMutableArray *recognizedTokens;
@property (copy, nonatomic) NSMutableArray *correctedTokens;

- (id)init;
- (void).cxx_destruct;

@end
