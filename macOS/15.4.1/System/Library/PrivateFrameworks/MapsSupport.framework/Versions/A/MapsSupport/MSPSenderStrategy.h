@class GEOSharedNavState, NSMutableSet;

@interface MSPSenderStrategy : NSObject {
    GEOSharedNavState *_state;
    BOOL _loggingOnly;
}

@property (readonly, nonatomic) NSMutableSet *participants;

+ (BOOL)_supportsEvent:(unsigned long long)a0;
+ (BOOL)_validateState:(id)a0 forEvent:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (void)_setState:(id)a0;
- (void)removeParticipants:(id)a0;
- (BOOL)removeParticipant:(id)a0 forReason:(unsigned long long)a1;
- (BOOL)setState:(id)a0 forEvent:(unsigned long long)a1;

@end
