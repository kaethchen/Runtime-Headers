@class NSArray;

@interface EWSFolderInfoResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *Folders;

+ (id)definition;

- (void).cxx_destruct;

@end
