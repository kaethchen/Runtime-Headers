@class NSString, ASTSuiteResultStatus, NSArray;

@interface ASTSuiteResultComponent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *assetLocator;
@property (retain, nonatomic) ASTSuiteResultStatus *status;
@property (retain, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 assetLocator:(id)a1 status:(id)a2 sections:(id)a3;

@end
