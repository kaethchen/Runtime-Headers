@class RSNodeConnection;
@protocol RSNodeInputProducer;

@interface RSNodeInput : NSObject

@property (readonly, weak, nonatomic) RSNodeConnection *connection;
@property (weak, nonatomic) id<RSNodeInputProducer> producer;

+ (id)keyPathsForValuesAffectingConnection;

- (void).cxx_destruct;

@end
