@class NSString;

@interface BMMediaReaction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *mediaUUID;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 mediaUUID:(id)a1 type:(int)a2;

@end
