@class NSArray;

@interface FCModifyRecordsCommand : FCCommand <FCRecordTransformingCommand> {
    BOOL _merge;
    id /* block */ _localRecordsGenerator;
    NSArray *_localRecords;
}

@property (readonly, nonatomic) NSArray *t_localRecords;

+ (BOOL)supportsSecureCoding;
+ (id)desiredKeys;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToRemoteRecords:(id)a0 remoteDeletions:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithLocalRecords:(id)a0 merge:(BOOL)a1;
- (id)initWithLocalRecordsGenerator:(id /* block */)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
