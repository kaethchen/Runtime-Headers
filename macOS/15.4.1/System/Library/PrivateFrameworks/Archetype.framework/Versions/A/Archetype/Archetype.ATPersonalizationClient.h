@class NSString, _TtC9Archetype25ATArrayOfPlayedMediaItems, _TtC9Archetype23ATArrayOfCalendarEvents;

@interface Archetype.ATPersonalizationClient : NSObject <Archetype.ATPersonalizationService> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ remoteObjectProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)currentLocationWithEffectiveBundleIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;
- (void)freeNowWithExcludeAllDayEvents:(BOOL)a0 completionHandler:(void (^)(_TtC9Archetype23ATArrayOfCalendarEvents *))a1;
- (void)topPlayedMediaWithK:(long long)a0 start:(long long)a1 end:(long long)a2 mediaType:(NSString *)a3 completionHandler:(void (^)(_TtC9Archetype25ATArrayOfPlayedMediaItems *))a4;

@end
