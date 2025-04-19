@class NSArray;

@interface EWSUpdateFolderType : EWSBaseRequestType

@property (copy, nonatomic) NSArray *FolderChanges;

+ (id)definition;

- (void).cxx_destruct;

@end
