@class NSLocale;

@interface GKTextModerator : NSObject {
    void /* unknown type, empty encoding */ implementation;
}

@property (class, nonatomic, readonly) GKTextModerator *localeAgnosticTextModerator;
@property (class, nonatomic, readonly) GKTextModerator *defaultTextModerator;

@property (nonatomic, readonly) NSLocale *locale;

+ (BOOL)isAvailable;
+ (id)forLocale:(id)a0;
+ (BOOL)isAvailableForLocale:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldFilter:(id)a0;

@end
