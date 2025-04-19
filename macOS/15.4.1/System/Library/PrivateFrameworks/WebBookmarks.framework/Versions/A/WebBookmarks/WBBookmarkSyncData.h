@class NSData, NSArray, CKRecordID, NSMutableDictionary, NSDictionary, CKRecord, CKShare, WBSCRDTPosition;

@interface WBBookmarkSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_generations;
    NSMutableDictionary *_auxiliaryRecords;
    NSDictionary *_extraPositionData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *encodedBookmarkSyncData;
@property (copy, nonatomic) CKRecord *record;
@property (nonatomic) long long state;
@property (retain, nonatomic) WBSCRDTPosition *position;
@property (nonatomic) long long minimumAPIVersion;
@property (copy, nonatomic) NSDictionary *positionDictionaryRepresentation;
@property (nonatomic) unsigned long long modifiedAttributeMask;
@property (copy, nonatomic) CKRecordID *parentRecordID;
@property (nonatomic) BOOL hasRecordExpired;
@property (copy, nonatomic) CKShare *shareRecord;
@property (nonatomic) BOOL isDeletingRecordZone;
@property (readonly, copy, nonatomic) NSArray *auxiliaryRecordIDs;

+ (id)positionFromContentsOfData:(id)a0;
+ (id)syncDataWithContentsOfData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateGenerationsUsingBlock:(id /* block */)a0;
- (id)auxiliaryRecordForKey:(id)a0;
- (void)clearAllCKRecords;
- (void)clearAllGenerationsExceptState;
- (id)generationForKey:(id)a0;
- (BOOL)hasGenerationForKey:(id)a0;
- (void)incrementGenerationForKey:(id)a0 withDeviceIdentifier:(id)a1;
- (id)readOnlyProxy;
- (void)setAuxiliaryRecord:(id)a0 forKey:(id)a1;
- (void)setGeneration:(id)a0 forKey:(id)a1;

@end
