@class NSString;

@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType;

- (void).cxx_destruct;
- (id)initWithQueryType:(id)a0;
- (id)queryWithStartDate:(id)a0 endDate:(id)a1;

@end
