@class NSString, NSData;

@interface HAPAccessoryWakeTuple : HMFObject

@property (readonly, nonatomic) NSString *wakeAddress;
@property (readonly, nonatomic) long long wakePort;
@property (readonly, nonatomic) NSData *wakePattern;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPort:(long long)a0 wakeAddress:(id)a1 wakePattern:(id)a2;

@end
