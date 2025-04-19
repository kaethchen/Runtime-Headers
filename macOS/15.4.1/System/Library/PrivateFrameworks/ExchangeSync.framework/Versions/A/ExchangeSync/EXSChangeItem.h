@class NSString, EXSBaseProperties, NSDate;

@interface EXSChangeItem : NSObject

@property (nonatomic) long long changeID;
@property (nonatomic) long long accountID;
@property (nonatomic) long long itemType;
@property (nonatomic) long long changeType;
@property (retain, nonatomic) NSString *changeSourceID;
@property (retain, nonatomic) NSDate *modificationDT;
@property (nonatomic) long long itemID;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *externalChangeKey;
@property (retain, nonatomic) NSString *externalParentFolderID;
@property (retain, nonatomic) NSString *internalID;
@property (retain, nonatomic) NSString *internalChangeKey;
@property (retain, nonatomic) NSString *internalParentFolderID;
@property (retain, nonatomic) EXSBaseProperties *properties;
@property (nonatomic) BOOL shouldSendNotification;
@property (nonatomic) BOOL eventHasAttendees;
@property (nonatomic) BOOL isDetached;
@property (retain, nonatomic) NSString *parentExternalID;
@property (retain, nonatomic) NSString *parentInternalID;
@property (nonatomic) long long instanceIndex;
@property (retain, nonatomic) NSString *parentExternalChangeKey;

+ (id)log;
+ (id)changeItemTypeToString:(long long)a0;
+ (id)changeTypeToString:(long long)a0;
+ (long long)precisionTimeSynchronizationChangeItemItemTypeForItem:(id)a0;
+ (id)sortedListWithFoldersFirst:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)changeItemWithUpdatedExternalParentFolderID:(id)a0 andInternalParentFolderID:(id)a1;
- (id)initWithChangeID:(long long)a0 accountID:(long long)a1 itemType:(long long)a2 changeType:(long long)a3 changeSource:(id)a4 modificationDateTime:(id)a5 itemID:(long long)a6 externalID:(id)a7 externalChangeKey:(id)a8 externalParentFolderID:(id)a9 internalID:(id)a10 internalChangeKey:(id)a11 internalParentFolderID:(id)a12 properties:(id)a13;
- (BOOL)itemTypeIsFolder;
- (BOOL)itemTypeIsItem;
- (void)updateDetachedChangeItemWithParentIdentifiers:(id)a0;
- (id)updatedProperties:(id)a0;

@end
