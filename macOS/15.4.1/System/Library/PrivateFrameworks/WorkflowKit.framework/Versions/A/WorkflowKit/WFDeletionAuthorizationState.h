@class NSString;

@interface WFDeletionAuthorizationState : NSObject <WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *status;
@property (readonly, copy, nonatomic) NSString *contentItemClassName;
@property (readonly, copy, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)deniedPermissionsErrorForContentItemClass:(Class)a0;
+ (id)dontDeleteErrorForContentItemClass:(Class)a0;
+ (id)stateFromDatabaseData:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)databaseDataWithError:(id *)a0;
- (id)deniedPermissionsError;
- (id)initWithStatus:(id)a0 contentItemClassName:(id)a1 actionUUID:(id)a2 count:(unsigned long long)a3;
- (id)localizedExfiltrationRestrictedError;
- (id)siriActionToolDescription;
- (id)stateWithStatus:(id)a0 count:(unsigned long long)a1;

@end
