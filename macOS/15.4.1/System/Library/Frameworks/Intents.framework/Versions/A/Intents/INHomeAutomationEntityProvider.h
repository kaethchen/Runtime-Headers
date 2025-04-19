@class NSArray, NSString;

@interface INHomeAutomationEntityProvider : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *roomNames;
@property (readonly, copy) NSString *homeName;
@property (readonly, copy) NSArray *zoneNames;
@property (readonly, copy) NSArray *accessoryNames;
@property (readonly, copy) NSArray *serviceNames;
@property (readonly, copy) NSArray *serviceGroups;
@property (readonly, copy) NSArray *intentFromEntities;
@property (readonly, copy) NSString *intentDeviceQuantifier;
@property (readonly, copy) NSString *destinationDeviceId;
@property (readonly, copy) NSString *intentDeviceType;
@property (readonly, copy) NSString *intentPlaceHint;
@property (readonly, copy) NSString *intentReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRoomNames:(id)a0 homeName:(id)a1 zoneNames:(id)a2 accessoryNames:(id)a3 serviceNames:(id)a4 serviceGroups:(id)a5 intentFromEntities:(id)a6 intentDeviceQuantifier:(id)a7 destinationDeviceId:(id)a8 intentDeviceType:(id)a9 intentPlaceHint:(id)a10 intentReference:(id)a11;

@end
