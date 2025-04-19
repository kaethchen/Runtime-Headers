@class NSString, IMDispatchTimer;

@interface IDSParakeetMessagingStopStateMachine : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (retain, nonatomic) IMDispatchTimer *finalAckTimer;

- (void)dealloc;
- (void).cxx_destruct;

@end
