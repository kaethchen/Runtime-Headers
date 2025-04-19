@class NSString;
@protocol MSPSenderMessageStrategyDelegate;

@interface MSPSenderMessageStrategy : MSPSenderStrategy {
    NSString *_serviceName;
    unsigned long long _type;
}

@property (weak, nonatomic) id<MSPSenderMessageStrategyDelegate> delegate;

+ (BOOL)_supportsEvent:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (id)initWithDelegate:(id)a0 capabilityType:(unsigned long long)a1 serviceName:(id)a2;
- (void)sendMessageIfNeeded;
- (BOOL)setState:(id)a0 forEvent:(unsigned long long)a1;

@end
