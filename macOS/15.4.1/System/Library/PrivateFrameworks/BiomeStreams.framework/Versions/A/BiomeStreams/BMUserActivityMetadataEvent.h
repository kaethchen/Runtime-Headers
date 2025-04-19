@class NSData, NSString, NSArray;

@interface BMUserActivityMetadataEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *associatedBundleId;
@property (readonly, nonatomic) NSString *associatedURLString;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) BOOL hasAssociatedImageRepresentation;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 userActivityData:(id)a1 title:(id)a2 activityType:(id)a3 associatedBundleId:(id)a4 associatedURLString:(id)a5 modeIdentifier:(id)a6 topics:(id)a7 hasAssociatedImageRepresentation:(BOOL)a8 uuid:(id)a9;
- (id)initWithProto:(id)a0;

@end
