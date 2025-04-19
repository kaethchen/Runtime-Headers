@class _TtC24AppletTranslationLibrary17MetroStateMonitor;

@interface AppletTranslationLibrary.MetroStateMonitor : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ subscriber;
}

@property (class, nonatomic, readonly) _TtC24AppletTranslationLibrary17MetroStateMonitor *shared;

@property (nonatomic, readonly) BOOL inMetro;

- (id)init;
- (void).cxx_destruct;
- (void)consumeStateWithAid:(id)a0 newState:(BOOL)a1;

@end
