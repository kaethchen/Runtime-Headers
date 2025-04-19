@class NSString;

@interface BMTombstoneEvent : NSObject <BMProtoBufWrapper, NSSecureCoding, BMStoreData> {
    unsigned int _dataVersion;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long deletionReason;
@property (readonly, nonatomic) NSString *policyID;
@property (readonly, nonatomic) double eventTimestamp;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)_initWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 eventTimestamp:(double)a3 reason:(unsigned long long)a4 policyID:(id)a5 processName:(id)a6;
- (id)initWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 eventTimestamp:(double)a3 reason:(unsigned long long)a4 policyID:(id)a5;

@end
