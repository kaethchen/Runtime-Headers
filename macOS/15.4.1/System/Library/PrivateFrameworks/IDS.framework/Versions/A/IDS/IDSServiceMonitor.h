@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)updateAvailability;
- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;
- (void)_updateAvailability;
- (long long)serviceAvailability;

@end
