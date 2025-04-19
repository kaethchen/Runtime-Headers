@class NSString, NSArray;

@interface iCloudSettings.UpsellCard : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ features;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *features;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
