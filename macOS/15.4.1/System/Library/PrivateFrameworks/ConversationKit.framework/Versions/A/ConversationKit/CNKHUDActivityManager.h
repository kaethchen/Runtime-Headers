@interface CNKHUDActivityManager : NSObject {
    void /* unknown type, empty encoding */ displayResolver;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ _bannerPresentationManager;
    void /* unknown type, empty encoding */ presentedActivity;
    void /* unknown type, empty encoding */ updates;
}

@property (class, nonatomic, readonly) CNKHUDActivityManager *sharedManager;

- (id)init;
- (void).cxx_destruct;

@end
