@class NSString;

@interface BMNowPlayingOutputDevice : NSObject

@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;
@property (readonly, nonatomic) NSString *deviceId;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)proto;
- (id)initWithDeviceType:(unsigned long long)a0 deviceSubType:(unsigned long long)a1 deviceId:(id)a2;

@end
