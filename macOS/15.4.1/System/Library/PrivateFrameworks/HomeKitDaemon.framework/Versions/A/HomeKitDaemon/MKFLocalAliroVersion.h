@class NSData;

@interface MKFLocalAliroVersion : HMDManagedObject

@property (retain, nonatomic) NSData *bleAdvertisingVersions;
@property (retain, nonatomic) NSData *bleUWBSupportedVersions;
@property (retain, nonatomic) NSData *expeditedTransactionSupportedVersions;
@property (retain, nonatomic) NSData *bleAdvertisingVersions;
@property (retain, nonatomic) NSData *bleUWBSupportedVersions;
@property (retain, nonatomic) NSData *expeditedTransactionSupportedVersions;

+ (id)fetchRequest;

@end
