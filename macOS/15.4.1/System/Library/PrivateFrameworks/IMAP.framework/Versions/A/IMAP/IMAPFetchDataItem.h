@class NSString;

@interface IMAPFetchDataItem : NSObject

@property (copy, nonatomic) NSString *commandString;

+ (id)UIDDataItem;
+ (id)appleRemoteLinksDataItem;
+ (id)bodyStructureDataItem;
+ (id)flagsDataItem;
+ (id)gmailLabelsDataItem;
+ (id)internalDateDataItem;
+ (id)modificationSequenceDataItem;
+ (id)sizeDataItem;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
