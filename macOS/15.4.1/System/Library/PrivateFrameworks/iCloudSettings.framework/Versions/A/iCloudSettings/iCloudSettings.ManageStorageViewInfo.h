@class NSString, NSArray;

@interface iCloudSettings.ManageStorageViewInfo : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ storageHeaderText;
    void /* unknown type, empty encoding */ specifiers;
    void /* unknown type, empty encoding */ tips;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *storageHeaderText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ storageBarColors;
@property (nonatomic, readonly) NSArray *specifiers;
@property (nonatomic, readonly) NSArray *tips;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
