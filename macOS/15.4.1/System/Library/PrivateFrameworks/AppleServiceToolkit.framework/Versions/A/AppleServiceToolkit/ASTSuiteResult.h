@class NSString, NSArray;

@interface ASTSuiteResult : NSObject

@property (retain, nonatomic) NSString *suiteName;
@property (retain, nonatomic) NSArray *components;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 components:(id)a1;

@end
