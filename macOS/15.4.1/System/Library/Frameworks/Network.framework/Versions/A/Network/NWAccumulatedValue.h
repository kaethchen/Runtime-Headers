@class NSString, NWAccumulation, NSObject;

@interface NWAccumulatedValue : NSObject

@property (retain, nonatomic) NSObject *object;
@property (retain, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NWAccumulation *accumulation;
@property (copy, nonatomic) id /* block */ callback;

- (id)description;
- (void).cxx_destruct;
- (id)snapshot;

@end
