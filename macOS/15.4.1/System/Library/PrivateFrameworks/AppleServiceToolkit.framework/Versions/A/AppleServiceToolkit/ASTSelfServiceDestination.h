@class NSArray;

@interface ASTSelfServiceDestination : NSObject

@property (nonatomic) long long endpoint;
@property (retain, nonatomic) NSArray *suites;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEndpoint:(long long)a0 suites:(id)a1;

@end
