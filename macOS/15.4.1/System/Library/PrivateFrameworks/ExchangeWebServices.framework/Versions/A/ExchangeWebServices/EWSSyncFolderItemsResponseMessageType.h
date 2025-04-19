@class NSString, NSArray;

@interface EWSSyncFolderItemsResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSString *SyncState;
@property (nonatomic) BOOL IncludesLastItemInRange;
@property (copy, nonatomic) NSArray *Changes;

+ (id)definition;

- (void).cxx_destruct;

@end
