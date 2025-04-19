@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand <FCRecordTransformingCommand> {
    NSArray *_recordIDs;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordIDs:(id)a0;
- (void)applyToRemoteRecords:(id)a0 remoteDeletions:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;

@end
