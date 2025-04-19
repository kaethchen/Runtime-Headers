@class NSString, NSArray;

@interface iCloudSettings.iCloudAppsCard : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ statusColor;
    void /* unknown type, empty encoding */ apps;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *statusColor;
@property (nonatomic, readonly) NSArray *apps;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
