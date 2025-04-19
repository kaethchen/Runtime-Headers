@interface VSKPagination : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) long long offset;

- (id)initWithLimit:(long long)a0 offset:(long long)a1;

@end
