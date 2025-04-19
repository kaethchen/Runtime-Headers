@class NSDate, RTLocationRequestOptions;

@interface RTLocationManagerLocationRequest : NSObject

@property (readonly, nonatomic) RTLocationRequestOptions *options;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSDate *startDate;

- (id)description;
- (void).cxx_destruct;
- (id)expiryDate;
- (id)initWithOptions:(id)a0 handler:(id /* block */)a1;

@end
