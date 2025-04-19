@class NSString, SCContentSharingPickerConfiguration, NSMutableArray, NSNumber;

@interface SCContentSharingPickerInfo : NSObject

@property (retain, nonatomic) NSMutableArray *streams;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *maxStreamCount;
@property (nonatomic) unsigned long long excludedPickingModes;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *configuration;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *defaultConfiguration;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL canShareApplication;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)serialize;
- (BOOL)isEqualToPickerInfo:(id)a0;

@end
