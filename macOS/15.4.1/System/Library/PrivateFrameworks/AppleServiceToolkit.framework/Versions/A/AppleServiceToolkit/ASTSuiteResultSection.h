@class NSString, NSArray;

@interface ASTSuiteResultSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *tests;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithTitle:(id)a0 tests:(id)a1;

@end
