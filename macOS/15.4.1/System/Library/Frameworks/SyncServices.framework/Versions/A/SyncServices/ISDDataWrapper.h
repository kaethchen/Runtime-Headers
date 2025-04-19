@class NSString, NSData, NSDate, NSNumber;

@interface ISDDataWrapper : NSObject <NSCoding> {
    NSString *_guid;
    NSString *_extension;
    NSDate *_moddate;
    NSData *_signature;
    NSNumber *_length;
    unsigned int _hash;
    NSString *_subdir;
    NSData *_dataCache;
    NSString *_recordId;
    NSString *_propertyName;
    BOOL _faultFailure;
    NSString *_previousExtension;
}

+ (void)initialize;
+ (id)dataReferenceDirectory;
+ (id)dataReferencePathNamesWithExtension:(id)a0 prependSubdirs:(BOOL)a1;
+ (id)dataWrapperWithData:(id)a0;
+ (void)deleteAllReferencesForClientWithId:(id)a0;
+ (void)setDataReferenceDirectory:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)signature;
- (id)extension;
- (void)setExtension:(id)a0;
- (id)propertyName;
- (void)setPropertyName:(id)a0;
- (void)setSignature:(id)a0;
- (id)loadData;
- (id)guid;
- (void)setGuid:(id)a0;
- (id)dataWrapper;
- (id)recordId;
- (void)setRecordId:(id)a0;
- (id)dataCache;
- (id)_loadData;
- (BOOL)_backingStoreExists;
- (BOOL)_dataReferenceWasSaved;
- (id)moddate;
- (id)_composePathToData:(id)a0;
- (unsigned long long)_dataReferenceCount:(id)a0;
- (BOOL)_isUpToDateWithData;
- (id)_pathToData;
- (id)_pathToDataDirectory;
- (id)_pathToDataUsingPreviousExtension;
- (void)_updateWrapperWithData;
- (BOOL)backingStoreEqual:(id)a0;
- (BOOL)dataFaultFailure;
- (id)dataReference;
- (BOOL)deleteDataReference:(id *)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (id)initDataWrapperWithData:(id)a0;
- (id)initWithQuickDirtyCoder:(id)a0;
- (id)isd_data;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)isd_isEqual:(id)a0;
- (int)isd_quickDirtyCoderType;
- (id)previousExtension;
- (BOOL)saveDataReference:(id *)a0 withExtension:(id)a1;
- (void)setExtension:(id)a0 savePrevious:(BOOL)a1;
- (void)setModdate:(id)a0;
- (void)setPreviousExtension:(id)a0;
- (BOOL)swapPreviousBackingStore:(id)a0;

@end
