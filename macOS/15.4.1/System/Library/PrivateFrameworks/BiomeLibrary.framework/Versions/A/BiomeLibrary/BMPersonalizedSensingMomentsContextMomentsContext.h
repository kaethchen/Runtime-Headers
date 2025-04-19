@class NSUUID, NSArray, NSString, NSDate;

@interface BMPersonalizedSensingMomentsContextMomentsContext : BMEventBase <BMStoreData> {
    NSString *_raw_contextIdentifier;
    BOOL _hasRaw_contextCreationTimestamp;
    double _raw_contextCreationTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *contextIdentifier;
@property (readonly, nonatomic) NSArray *contextStrings;
@property (readonly, nonatomic) NSDate *contextCreationTimestamp;
@property (readonly, nonatomic) unsigned int associatedPatternType;
@property (nonatomic) BOOL hasAssociatedPatternType;
@property (readonly, nonatomic) unsigned int metadataContentBitmap;
@property (nonatomic) BOOL hasMetadataContentBitmap;
@property (readonly, nonatomic) unsigned int actionType;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) NSArray *associatedLocations;
@property (readonly, nonatomic) NSArray *associatedContacts;
@property (readonly, nonatomic) NSArray *associatedTime;
@property (readonly, nonatomic) NSArray *associatedMusic;
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
- (id)_associatedContactsJSONArray;
- (id)_associatedLocationsJSONArray;
- (id)_associatedMusicJSONArray;
- (id)_associatedTimeJSONArray;
- (id)_contextStringsJSONArray;
- (id)initWithContextIdentifier:(id)a0 contextStrings:(id)a1 contextCreationTimestamp:(id)a2 associatedPatternType:(id)a3 metadataContentBitmap:(id)a4;
- (id)initWithContextIdentifier:(id)a0 contextStrings:(id)a1 contextCreationTimestamp:(id)a2 associatedPatternType:(id)a3 metadataContentBitmap:(id)a4 actionType:(id)a5;
- (id)initWithContextIdentifier:(id)a0 contextStrings:(id)a1 contextCreationTimestamp:(id)a2 associatedPatternType:(id)a3 metadataContentBitmap:(id)a4 actionType:(id)a5 associatedLocations:(id)a6 associatedContacts:(id)a7 associatedTime:(id)a8 associatedMusic:(id)a9;

@end
