@class NSDate;

@interface IMSpotlightClientState : NSObject <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lastIndexedRowID;
@property (nonatomic) unsigned long long initialReindexRowID;
@property (nonatomic) long long indexRevision;
@property (nonatomic) long long indexVersion;
@property (nonatomic) unsigned long long initialIndexedMessages;
@property (nonatomic) unsigned long long processedMessageRecords;
@property (nonatomic) unsigned long long initialTotalMessages;
@property (retain, nonatomic) NSDate *indexBeginDate;
@property (readonly, nonatomic) BOOL needsReindex;
@property (readonly, nonatomic) BOOL needsIndexDrop;

+ (long long)_latestIndexRevision;
+ (long long)_latestIndexVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataWithError:(id *)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithMaxRowID:(unsigned long long)a0 totalMessages:(unsigned long long)a1;
- (id)_initWithLastIndexedRowID:(unsigned long long)a0 initialReindexRowID:(unsigned long long)a1 indexRevision:(long long)a2 indexVersion:(long long)a3 initialIndexedMessages:(long long)a4 initialTotalMessages:(long long)a5 processedMessageRecords:(unsigned long long)a6 indexingBeganDate:(id)a7;

@end
