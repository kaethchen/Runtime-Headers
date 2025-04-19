@class NSString;

@interface iCloudSettings.SettingsFooterItem : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 action:(id)a3;

@end
