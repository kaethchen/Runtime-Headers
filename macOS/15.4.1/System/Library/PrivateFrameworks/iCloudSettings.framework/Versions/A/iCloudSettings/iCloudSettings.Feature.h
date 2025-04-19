@class NSString;

@interface iCloudSettings.Feature : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ featureId;
    void /* unknown type, empty encoding */ iTunesItemId;
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *featureId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;
@property (nonatomic, readonly) NSString *iTunesItemId;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ icons;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)initWithFeatureId:(id)a0 title:(id)a1 subtitle:(id)a2 icons:(id)a3 action:(id)a4 iTunesItemId:(id)a5 bundleIdentifier:(id)a6;

@end
