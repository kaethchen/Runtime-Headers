@class NSString, NSError;
@protocol HMDProfilePhoto;

@interface HomeKitDaemon.AccountMetadata : NSObject <HMDAccountMetadata> {
    void /* unknown type, empty encoding */ iCloudAltDSID;
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ lastName;
    void /* unknown type, empty encoding */ accountStore;
}

@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;

- (id)init;
- (void).cxx_destruct;
- (void)profilePhotoWithCompletionHandler:(void (^)(id<HMDProfilePhoto>, NSError *))a0;
- (void)updateAccountMetadata;

@end
