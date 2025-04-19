@class BMIndex, NSArray, BMSQLDatabase;

@interface BMIndexSearch : NSObject

@property (readonly, nonatomic) BMIndex *index;
@property (readonly, nonatomic) NSArray *startFields;
@property (readonly, nonatomic) NSArray *endFields;
@property (readonly, nonatomic) BMSQLDatabase *database;

- (id)description;
- (void).cxx_destruct;
- (id)_buildSearchQueryWithStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 reversed:(BOOL)a3;
- (id)initWithIndex:(id)a0 startFields:(id)a1 endFields:(id)a2 database:(id)a3;
- (id)performSearchWithError:(id *)a0;
- (id)performSearchWithStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 reversed:(BOOL)a3 error:(id *)a4;

@end
