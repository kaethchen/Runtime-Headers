@class WFWorkflowRecord, NSUUID, NSArray, NSData, NSString, WFWorkflow;

@interface WFHomeWorkflow : NSObject {
    WFWorkflowRecord *_cachedWorkflowRecord;
    WFWorkflow *_cachedWorkflow;
}

@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *summaryString;
@property (readonly, copy, nonatomic) NSArray *summaryIconNames;
@property (readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic) BOOL requiresDeviceUnlockEnsuringHomesAreLoaded;

+ (void)setCachedHomes:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)workflowRecordWithEnvironment:(long long)a0 error:(id *)a1;
- (id)workflowWithEnvironment:(long long)a0 error:(id *)a1;

@end
