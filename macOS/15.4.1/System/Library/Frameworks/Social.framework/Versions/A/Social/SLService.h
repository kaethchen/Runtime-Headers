@interface SLService : NSObject

+ (id)allServices;
+ (id)serviceForServiceType:(id)a0;

- (id)serviceType;
- (id)accountType;
- (long long)maximumURLCount;
- (void)addExtraParameters:(id)a0 forRequest:(id)a1;
- (BOOL)hasAccounts;
- (BOOL)isFirstClassService;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (BOOL)supportsImageURL:(id)a0;
- (BOOL)supportsVideoURL:(id)a0;

@end
