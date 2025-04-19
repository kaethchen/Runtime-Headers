@class NSString, NSNumber;

@interface ASTSuiteResultStatus : NSObject

@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSNumber *statusCode;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithStatus:(id)a0 statusCode:(id)a1;

@end
