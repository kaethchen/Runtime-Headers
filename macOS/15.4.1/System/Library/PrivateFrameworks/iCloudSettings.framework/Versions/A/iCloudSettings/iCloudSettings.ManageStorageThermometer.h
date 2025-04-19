@class NSArray, NSString;

@interface iCloudSettings.ManageStorageThermometer : NSObject {
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ otherAppsDisplayLabel;
    void /* unknown type, empty encoding */ dimmedSectionColor;
    void /* unknown type, empty encoding */ usageLabel;
}

@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSString *otherAppsDisplayLabel;
@property (nonatomic, readonly) NSString *dimmedSectionColor;
@property (nonatomic, readonly) NSString *usageLabel;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
