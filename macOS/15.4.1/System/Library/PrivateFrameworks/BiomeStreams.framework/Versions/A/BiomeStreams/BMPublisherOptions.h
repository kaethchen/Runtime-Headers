@class BMIndexSearch, NSDate;

@interface BMPublisherOptions : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long maxEvents;
@property (nonatomic) unsigned long long lastN;
@property (nonatomic) BOOL reversed;
@property (retain, nonatomic) BMIndexSearch *indexSearch;

+ (id)reversed;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 reversed:(BOOL)a4;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 indexSearch:(id)a2 maxEvents:(unsigned long long)a3 lastN:(unsigned long long)a4 reversed:(BOOL)a5;

@end
