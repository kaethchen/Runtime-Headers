@class NSString;

@interface HMDAliroVersion : NSObject {
    void /* unknown type, empty encoding */ expeditedTransactionSupportedVersions;
    void /* unknown type, empty encoding */ bleUWBSupportedVersions;
    void /* unknown type, empty encoding */ bleAdvertisingVersions;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExpeditedTransactionSupportedVersions:(id)a0 bleUWBSupportedVersions:(id)a1 bleAdvertisingVersions:(id)a2;

@end
