@class NSString, NSArray;

@interface BMPhotosPhotoViewEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithUniqueId:(id)a0 locations:(id)a1 absoluteTimestamp:(double)a2 contentProtection:(id)a3;
- (id)initWithProto:(id)a0;
- (id)initWithUniqueId:(id)a0 locations:(id)a1 absoluteTimestamp:(double)a2;
- (id)initWithUniqueId:(id)a0 personaId:(id)a1 locations:(id)a2 absoluteTimestamp:(double)a3 contentProtection:(id)a4;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;

@end
