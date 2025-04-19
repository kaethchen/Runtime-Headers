@class NSDictionary, NSDate;

@interface MXAggregateEndpointCallback : NSObject

@property (readonly) struct OpaqueFigEndpoint { } *endpoint;
@property (readonly) unsigned long long features;
@property (readonly) NSDictionary *options;
@property (readonly) void *callback;
@property (readonly) void *callbackRefCon;
@property (readonly) unsigned long long operationType;
@property (readonly, nonatomic) NSDate *creationTime;

- (void)dealloc;
- (id)description;
- (id)_debugStringForOperationType:(unsigned long long)a0;
- (id)initWithAggregate:(struct OpaqueFigEndpoint { } *)a0 features:(unsigned long long)a1 options:(id)a2 callback:(void *)a3 callbackRefCon:(void *)a4 operationType:(unsigned long long)a5;

@end
