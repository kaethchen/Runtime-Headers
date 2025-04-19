@class NSString;

@interface iCloudSettings.StorageSummary : NSObject {
    void /* unknown type, empty encoding */ subscriptionLabel;
    void /* unknown type, empty encoding */ storageBarLabel;
    void /* unknown type, empty encoding */ storageBarColor;
    void /* unknown type, empty encoding */ usageLabel;
}

@property (nonatomic, readonly) NSString *subscriptionLabel;
@property (nonatomic, readonly) NSString *storageBarLabel;
@property (nonatomic, readonly) NSString *storageBarColor;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ totalStorageInBytes;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ usedStorageInBytes;
@property (nonatomic, readonly) NSString *usageLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
