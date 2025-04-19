@class NSData;

@interface SESDesignatedKey : NSObject

@property (readonly) long long designation;
@property (readonly) NSData *keyIdentifier;
@property (readonly) NSData *aid;
@property (readonly) long long slotNumber;
@property (readonly) NSData *assetACL;
@property (readonly) NSData *assetACLAttestation;
@property (readonly) long long operationApprovalVersion;

+ (id)fromDictionary:(id)a0;
+ (id)withAID:(id)a0 slotNumber:(long long)a1 keyIdentifier:(id)a2 assetACL:(id)a3 assetACLAttestation:(id)a4 operationApprovalVersion:(long long)a5 designation:(long long)a6;

- (void).cxx_destruct;
- (id)asDictionary;

@end
