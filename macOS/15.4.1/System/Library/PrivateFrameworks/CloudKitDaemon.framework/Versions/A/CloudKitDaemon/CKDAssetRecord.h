@class NSMutableDictionary, NSString, CKRecordID, NSArray, NSNumber;

@interface CKDAssetRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)CKPropertiesDescription;
- (void)addRereferencedMMCSPackageItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (id)allMMCSAndSectionItems;
- (id)allRecordKeys;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (id)allRereferenceMMCSPackageItems;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (BOOL)isAssetRecord;
- (BOOL)isEmptyOfRereferencesAssets;
- (BOOL)isPackageSectionRecord;

@end
