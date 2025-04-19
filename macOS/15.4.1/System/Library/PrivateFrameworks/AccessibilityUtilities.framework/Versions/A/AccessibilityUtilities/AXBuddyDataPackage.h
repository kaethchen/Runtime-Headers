@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) NSDictionary *testData;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *accessibilityOptions;
@property (retain, nonatomic) NSString *axOSVersion;
@property (retain, nonatomic) NSString *axModel;
@property (nonatomic) BOOL hasHomeButton;
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) BOOL usesExtendedSlider;

+ (id)dataBlobForBuddy;
+ (void)restoreDataBlobForBuddy:(id)a0;
+ (id)dataPackageForCurrentSettings;
+ (id)deviceClassForBuddy;
+ (id)productVersionForBuddy;
+ (void)setTestData:(id)a0 forModel:(id)a1 hasHomeButton:(BOOL)a2 largeTextUsesExtendedRange:(BOOL)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applySavedSettings;
- (void)applySavedSettings_macOS;
- (void)processDomainDictionary:(id)a0;

@end
