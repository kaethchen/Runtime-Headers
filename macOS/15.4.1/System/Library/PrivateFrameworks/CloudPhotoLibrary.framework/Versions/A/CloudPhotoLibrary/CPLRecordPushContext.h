@class NSString;

@interface CPLRecordPushContext : NSObject <NSSecureCoding>

@property (class, nonatomic) unsigned long long minimumPriorityForLocalConflictResolution;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uploadIdentifier;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) unsigned long long priority;

+ (long long)mergingFlags:(long long)a0 previousFlags:(long long)a1 changeType:(unsigned long long)a2;
+ (id)newEmptyPushContext;
+ (id)newPushContextForChange:(id)a0 overStoredRecord:(id)a1 initialUpload:(BOOL)a2;
+ (id)pushContextsFromStoredUploadIdentifiers:(id)a0;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:(id)a0 key:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyContextWithPriority:(unsigned long long)a0;
- (id)copyContextWithUploadIdentifier:(id)a0;
- (id)initWithUploadIdentifier:(id)a0 flags:(long long)a1 priority:(unsigned long long)a2;
- (id)pushContextAddingUploadIdentifier;
- (id)pushContextMergingFlags:(long long)a0 changeType:(unsigned long long)a1 uploadIdentifier:(id)a2 priority:(unsigned long long)a3;

@end
