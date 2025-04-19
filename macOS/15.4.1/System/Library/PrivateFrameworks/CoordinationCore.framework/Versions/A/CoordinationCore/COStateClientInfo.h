@class NSString, NSSet, NSDictionary;

@interface COStateClientInfo : NSObject {
    NSDictionary *_state;
    NSDictionary *_observers;
}

@property (readonly, copy, nonatomic) NSString *suite;
@property (readonly, copy, nonatomic) NSSet *clusters;
@property (readonly, copy, nonatomic) NSDictionary *observers;
@property (readonly, copy, nonatomic) NSDictionary *state;
@property (nonatomic) long long outstandingWriteCount;
@property (nonatomic) BOOL disconnected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)state;
- (id)observers;
- (id)initWithSuite:(id)a0 clusters:(id)a1;
- (id)stateForCluster:(id)a0;

@end
