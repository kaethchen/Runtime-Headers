@class NSString;

@interface InternalNetworkStateRecord : NSObject

@property (readonly) long long stateAge;
@property (readonly) long long stateDayOfWeek;
@property (readonly) long long stateSlotId;
@property (readonly) NSString *stateNetworkId;
@property (readonly) long long stateNetworkLQM;
@property (readonly) long long stateDurationSeconds;
@property (readonly) long long stateSlotLength;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)mergeState:(id)a0;
- (BOOL)_isEqualToNetworkStateRecord:(id)a0;
- (id)initWithAge:(long long)a0 dayOfWeek:(long long)a1 slotId:(long long)a2 networkId:(id)a3 networkLQM:(long long)a4 stateDurationSeconds:(long long)a5 stateSlotLength:(long long)a6;

@end
