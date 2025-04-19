@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timestampForNow;
+ (BOOL)doesTimestamp:(id)a0 includeAllChangesVisibleToTimestamp:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithTimestamps:(id)a0;
- (id)timestamps;
- (id)allDatabases;
- (id)timestampForDatabase:(int)a0;

@end
