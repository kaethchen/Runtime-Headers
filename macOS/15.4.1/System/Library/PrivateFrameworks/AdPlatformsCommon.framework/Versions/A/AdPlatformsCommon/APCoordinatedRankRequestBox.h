@class NSArray, APContext;

@interface APCoordinatedRankRequestBox : APCoordinatedRetryBox

@property (readonly, nonatomic) NSArray *contentDatas;
@property (readonly, nonatomic) APContext *context;
@property (readonly, nonatomic) unsigned long long placement;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 contents:(id)a1 placement:(unsigned long long)a2 handler:(id /* block */)a3;

@end
