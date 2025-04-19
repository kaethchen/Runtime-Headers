@class NSArray, NSString;

@interface iCloudSettings.ManageStorageAppsListDataModel : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
    void /* unknown type, empty encoding */ apps;
    void /* unknown type, empty encoding */ genericErrorMessage;
    void /* unknown type, empty encoding */ secondaryAppsSectionLabel;
}

@property (nonatomic, readonly) NSArray *apps;
@property (nonatomic, readonly) NSString *genericErrorMessage;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ thermometer;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ primaryAppsSectionCount;
@property (nonatomic, readonly) NSString *secondaryAppsSectionLabel;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
