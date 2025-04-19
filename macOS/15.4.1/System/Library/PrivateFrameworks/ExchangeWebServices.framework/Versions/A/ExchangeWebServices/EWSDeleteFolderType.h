@class NSArray;

@interface EWSDeleteFolderType : EWSBaseRequestType

@property (copy, nonatomic) NSArray *FolderIds;
@property (nonatomic) long long DeleteType;

+ (id)definition;

- (void).cxx_destruct;

@end
