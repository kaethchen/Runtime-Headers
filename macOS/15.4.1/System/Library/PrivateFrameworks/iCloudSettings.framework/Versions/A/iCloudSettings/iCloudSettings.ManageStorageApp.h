@class NSString, NSArray;

@interface iCloudSettings.ManageStorageApp : NSObject {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ detailLabelColor;
    void /* unknown type, empty encoding */ bundleIds;
    void /* unknown type, empty encoding */ thermometerUsageLabel;
    void /* unknown type, empty encoding */ category;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *detailLabelColor;
@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fetchLocally;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ applySystemStyle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ iconUrls;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ detailViewIconUrls;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;
@property (nonatomic, readonly) NSString *thermometerUsageLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ showInAppList;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
