@class NSUUID, NSString;

@interface BMPlaceInferenceMapItem : BMEventBase <BMStoreData> {
    NSString *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *category;
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
- (id)initWithIdentifier:(id)a0 name:(id)a1 address:(id)a2 category:(id)a3;
- (id)initByReadFrom:(id)a0;

@end
