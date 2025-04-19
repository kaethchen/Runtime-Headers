@class APAdRequestContents;

@interface APCoordinatedAdRequestBox : APCoordinatedRetryBox

@property (readonly, nonatomic) APAdRequestContents *requestContents;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 contents:(id)a1 handler:(id /* block */)a2;

@end
