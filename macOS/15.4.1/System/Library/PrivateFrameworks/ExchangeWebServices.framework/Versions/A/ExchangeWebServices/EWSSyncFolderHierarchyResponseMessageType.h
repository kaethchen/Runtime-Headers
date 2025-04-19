@class NSString, NSArray;

@interface EWSSyncFolderHierarchyResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSString *SyncState;
@property (nonatomic) BOOL IncludesLastFolderInRange;
@property (copy, nonatomic) NSArray *Changes;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
