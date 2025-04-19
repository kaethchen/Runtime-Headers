@class RSNodeConnection;
@protocol RSNodeOutputConsumer;

@interface RSNodeOutput : NSObject

@property (readonly, nonatomic) RSNodeConnection *connection;
@property (retain, nonatomic) id<RSNodeOutputConsumer> consumer;

+ (id)keyPathsForValuesAffectingConnection;

- (void).cxx_destruct;
- (void)emitMessage:(id)a0;

@end
