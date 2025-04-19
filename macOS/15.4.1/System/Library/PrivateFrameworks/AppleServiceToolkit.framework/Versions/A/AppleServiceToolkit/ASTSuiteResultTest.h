@class NSNumber, NSString, ASTSuiteResultStatus;

@interface ASTSuiteResultTest : NSObject

@property (retain, nonatomic) NSNumber *testID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) ASTSuiteResultStatus *status;
@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) NSString *testDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithTestID:(id)a0 name:(id)a1 value:(id)a2 status:(id)a3 result:(id)a4 description:(id)a5;

@end
