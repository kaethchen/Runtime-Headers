@class NSString;

@interface AMFolderActionWorkflowMetaData : AMWorkflowMetaData

@property (copy, nonatomic) NSString *folderActionFolderPath;
@property (copy) NSString *savedFolderActionFolderPath;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)metaData;
- (void)setFromDictionary:(id)a0;

@end
