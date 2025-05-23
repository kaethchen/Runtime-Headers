@class NSArray, NSError, CCDatabaseCommand;

@interface CCDatabaseExecutionResult : NSObject

@property (readonly, nonatomic) CCDatabaseCommand *command;
@property (readonly, nonatomic) unsigned long long beginMachTime;
@property (readonly, nonatomic) unsigned long long endMachTime;
@property (readonly, nonatomic) NSArray *rowValueTuples;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 beginMachTime:(unsigned long long)a1 endMachTime:(unsigned long long)a2 rowValueTuples:(id)a3 error:(id)a4;

@end
