@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountListCardDAV : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusHostname;
@property (copy, nonatomic) NSNumber *statusPort;
@property (copy, nonatomic) NSString *statusUsername;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 declarationIdentifier:(id)a2 visibleName:(id)a3 hostname:(id)a4 port:(id)a5 username:(id)a6;
+ (id)statusItemType;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isArrayValue;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
