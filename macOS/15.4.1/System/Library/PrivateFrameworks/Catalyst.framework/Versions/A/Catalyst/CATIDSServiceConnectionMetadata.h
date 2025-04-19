@class NSUUID, NSString, NSDictionary;

@interface CATIDSServiceConnectionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, copy, nonatomic) NSString *destinationAppleID;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0 destinationAppleID:(id)a1 userInfo:(id)a2;
- (BOOL)isEqualToMetadata:(id)a0;

@end
