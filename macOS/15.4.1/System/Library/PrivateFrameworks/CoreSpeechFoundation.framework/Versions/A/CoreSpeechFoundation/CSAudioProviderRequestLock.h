@class NSString;

@interface CSAudioProviderRequestLock : NSObject

@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) unsigned long long clientIdentity;

- (void).cxx_destruct;
- (id)initWithClientIdentity:(unsigned long long)a0;

@end
