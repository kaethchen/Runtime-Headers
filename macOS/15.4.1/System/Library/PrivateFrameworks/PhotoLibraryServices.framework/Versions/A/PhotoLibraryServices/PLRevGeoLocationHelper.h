@interface PLRevGeoLocationHelper : NSObject

+ (id)appleProviderID;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)currentRevGeoProvider;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;

@end
