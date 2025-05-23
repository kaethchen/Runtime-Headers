@class NSNumber, NSString, NSData;

@interface CKAssetDownloadStagingInfo : NSObject <CKPropertiesDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *itemID;
@property (readonly, copy, nonatomic) NSString *trackingUUID;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithItemID:(id)a0 trackingUUID:(id)a1 signature:(id)a2;

@end
