@class NSString;

@interface AOSUIQuotaFetcher : NSObject

@property (nonatomic) BOOL fetched;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL serviceIsLimited;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedFetcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)_fetchGeoInformation;

@end
