@class NSArray;

@interface CLIArguments : NSObject

@property (retain, nonatomic) NSArray *arguments;

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)consumeUpToIndex:(long long)a0;

@end
