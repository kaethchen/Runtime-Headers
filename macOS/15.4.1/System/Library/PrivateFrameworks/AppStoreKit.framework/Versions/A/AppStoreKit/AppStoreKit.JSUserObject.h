@class NSString, NSNumber;

@interface AppStoreKit.JSUserObject : NSObject <_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_> {
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ onDevicePersonalizationDataManager;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isOnDevicePersonalizationEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)onDevicePersonalizationDataContainerForAppIds:(id)a0;

@end
