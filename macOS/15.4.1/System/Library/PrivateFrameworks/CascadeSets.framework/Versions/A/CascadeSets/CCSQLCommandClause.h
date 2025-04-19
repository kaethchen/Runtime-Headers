@class NSString, NSArray;

@interface CCSQLCommandClause : NSObject

@property (readonly, nonatomic) NSString *clause;
@property (readonly, nonatomic) NSArray *parameters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClause:(id)a0 parameters:(id)a1;

@end
