@class NSDictionary, NSNumber, NSString;

@interface ASTTestAttributes : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSNumber *testId;
@property (retain, nonatomic) NSString *version;

+ (id)attributesWithTestId:(id)a0 version:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTestId:(id)a0 version:(id)a1;

@end
