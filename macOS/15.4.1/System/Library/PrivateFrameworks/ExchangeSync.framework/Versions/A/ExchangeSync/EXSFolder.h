@class NSString;

@interface EXSFolder : NSObject

@property (nonatomic) long long folderID;
@property (nonatomic) long long accountID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long folderType;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalChangeKey;
@property (copy, nonatomic) NSString *externalSyncState;
@property (copy, nonatomic) NSString *externalParentFolderID;
@property (copy, nonatomic) NSString *internalID;
@property (copy, nonatomic) NSString *internalChangeKey;
@property (copy, nonatomic) NSString *internalParentFolderID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChangeItem:(id)a0;
- (BOOL)recognizesExclusiveExternalIDUpdates;
- (void)updateWithChangeItem:(id)a0;

@end
