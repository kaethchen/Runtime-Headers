@class RCUnfairLock, NSString, RCEndpointConfig, RCDebugOverrides, RCBackgroundFetchConfiguration, NSArray, RCDeviceInfo;

@interface RCConfigurationSettings : NSObject <RCSerializable>

@property (retain, nonatomic) RCDebugOverrides *internalDebugOverrides;
@property (copy, nonatomic) NSString *internalLoggingKey;
@property (retain, nonatomic) RCBackgroundFetchConfiguration *internalBackgroundFetchConfiguration;
@property (nonatomic) BOOL internalUseBackgroundRefreshRate;
@property (nonatomic) unsigned long long internalRequestMode;
@property (retain, nonatomic) RCEndpointConfig *internalEndpointConfig;
@property (nonatomic) double internalEndpointTimeoutDuration;
@property (nonatomic) double internalFallbackTimeoutDuration;
@property (nonatomic) unsigned long long internalApplicationState;
@property (retain, nonatomic) RCUnfairLock *accessLock;
@property (readonly, nonatomic) NSArray *requestInfos;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) RCDeviceInfo *deviceInfo;
@property (readonly, copy, nonatomic) NSString *JSONRepresentation;
@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) RCDebugOverrides *debugOverrides;
@property (copy, nonatomic) NSString *loggingKey;
@property (retain, nonatomic) RCBackgroundFetchConfiguration *backgroundFetchConfiguration;
@property (nonatomic) BOOL useBackgroundRefreshRate;
@property (nonatomic) unsigned long long requestMode;
@property (retain, nonatomic) RCEndpointConfig *endpointConfig;
@property (nonatomic) double endpointTimeoutDuration;
@property (nonatomic) double fallbackTimeoutDuration;
@property (nonatomic) unsigned long long applicationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)fallbackURL;
- (id)applicationStateDescription;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 backgroundFetchConfiguration:(id)a7 requestMode:(unsigned long long)a8 endpointConfig:(id)a9 endpointTimeoutDuration:(double)a10 fallbackTimeoutDuration:(double)a11;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 backgroundFetchConfiguration:(id)a7 requestMode:(unsigned long long)a8 endpointTimeoutDuration:(double)a9 fallbackTimeoutDuration:(double)a10;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7 endpointTimeoutDuration:(double)a8;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7 endpointTimeoutDuration:(double)a8 fallbackTimeoutDuration:(double)a9;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 requestMode:(unsigned long long)a8;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8 backgroundFetchConfiguration:(id)a9 requestMode:(unsigned long long)a10 endpointConfig:(id)a11 endpointTimeoutDuration:(double)a12 fallbackTimeoutDuration:(double)a13;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8 backgroundFetchConfiguration:(id)a9 requestMode:(unsigned long long)a10 endpointTimeoutDuration:(double)a11 fallbackTimeoutDuration:(double)a12;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8 requestMode:(unsigned long long)a9 endpointTimeoutDuration:(double)a10;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 userID:(id)a2 storefrontID:(id)a3 bundleID:(id)a4 deviceInfo:(id)a5;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 userID:(id)a2 storefrontID:(id)a3 bundleID:(id)a4 deviceInfo:(id)a5 debugOverrides:(id)a6 backgroundFetchConfiguration:(id)a7;
- (id)requestInfoForRequestCacheKey:(id)a0;

@end
