@class NSData, NSString, NSUUID;

@interface STCloudActivation : STUniquedManagedObject <STSerializableManagedObject>

@property (nonatomic) long long activationType;
@property (retain, nonatomic) NSData *activationPlist;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *sortKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
