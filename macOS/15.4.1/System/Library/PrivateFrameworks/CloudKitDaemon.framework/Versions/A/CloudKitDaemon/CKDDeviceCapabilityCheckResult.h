@class NSString, NSArray, CKRecordID;

@interface CKDDeviceCapabilityCheckResult : NSObject

@property (readonly, nonatomic) BOOL isSupported;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSArray *publicKeys;
@property (readonly, nonatomic) BOOL canValidateWithKT;
@property (readonly, copy, nonatomic) CKRecordID *shareID;

- (void).cxx_destruct;
- (id)initNotSupportedWithUserID:(id)a0 publicKeys:(id)a1 canValidateWithKT:(BOOL)a2 shareID:(id)a3;
- (id)initSupported;
- (id)makeClientResult;

@end
