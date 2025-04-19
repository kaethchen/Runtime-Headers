@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDApplicationID *applicationID;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSString *personaID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;

@end
