@class NSString;

@interface EXSItem : NSObject

@property (nonatomic) long long itemID;
@property (nonatomic) long long parentFolderID;
@property (nonatomic) long long accountID;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalChangeKey;
@property (copy, nonatomic) NSString *externalParentFolderID;
@property (copy, nonatomic) NSString *internalID;
@property (copy, nonatomic) NSString *internalChangeKey;
@property (copy, nonatomic) NSString *internalParentFolderID;

- (void).cxx_destruct;
- (id)initWithChangeItem:(id)a0 parentFolderID:(long long)a1;
- (BOOL)requiresPrecisionTimeSynchronization;
- (void)updateWithChangeItem:(id)a0 parentFolderID:(long long)a1;

@end
