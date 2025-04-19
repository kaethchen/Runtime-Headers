@class SHTokenizedURL;

@interface SHHapticsEndpoints : NSObject

@property (readonly) SHTokenizedURL *fetchHapticByAdamIDURL;
@property (readonly) SHTokenizedURL *hasHapticForAdamIDURL;
@property (readonly) SHTokenizedURL *fetchHapticByISRCURL;
@property (readonly) SHTokenizedURL *hasHapticForISRCURL;

- (void).cxx_destruct;
- (id)availabilityRequestForID:(id)a0 ofIDType:(long long)a1;
- (id)fetchRequestForID:(id)a0 ofIDType:(long long)a1;
- (id)initWithFetchHapticByAdamIDURL:(id)a0 hasHapticForAdamIDURL:(id)a1 fetchHapticByISRCURL:(id)a2 hasHapticForISRCURL:(id)a3;
- (id)requestOfType:(long long)a0 forID:(id)a1 ofIDType:(long long)a2;

@end
