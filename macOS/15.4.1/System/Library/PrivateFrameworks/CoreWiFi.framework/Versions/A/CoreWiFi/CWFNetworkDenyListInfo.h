@class NSString;

@interface CWFNetworkDenyListInfo : NSObject

@property unsigned long long reason;
@property long long reasonData;
@property (copy) NSString *reasonString;
@property double reasonTimestamp;
@property double stateTimestamp;
@property (copy) NSString *BSSID;
@property unsigned long long state;
@property (copy) NSString *stateString;

- (id)init;
- (void).cxx_destruct;

@end
