@class NSString, NSArray;

@interface BMAutonamingInferences : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *photosPersonIdentifier;
@property (readonly, nonatomic) NSString *inferredName;
@property (readonly, nonatomic) NSString *inferredContactIdentifier;
@property (readonly, nonatomic) NSString *inferredRelationshipToDeviceOwner;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSString *imageMessageIdentifier;
@property (readonly, nonatomic) NSArray *contextMessageIdentifiers;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_contextMessageIdentifiersJSONArray;
- (id)initWithPhotosPersonIdentifier:(id)a0 inferredName:(id)a1 inferredContactIdentifier:(id)a2 inferredRelationshipToDeviceOwner:(id)a3 confidence:(id)a4;
- (id)initWithPhotosPersonIdentifier:(id)a0 inferredName:(id)a1 inferredContactIdentifier:(id)a2 inferredRelationshipToDeviceOwner:(id)a3 confidence:(id)a4 imageMessageIdentifier:(id)a5 contextMessageIdentifiers:(id)a6;
- (id)initWithPhotosPersonIdentifier:(id)a0 inferredName:(id)a1 inferredContactIdentifier:(id)a2 inferredRelationshipToDeviceOwner:(id)a3 confidence:(id)a4 imageMessageIdentifier:(id)a5 contextMessageIdentifiers:(id)a6 modelVersion:(id)a7;

@end
