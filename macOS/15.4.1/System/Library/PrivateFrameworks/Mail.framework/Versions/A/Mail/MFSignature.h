@class NSString, MFSyncedSignatureContentsFile, NSData, WebArchive;

@interface MFSignature : NSObject <NSCopying> {
    NSString *_name;
    NSData *_webArchiveData;
    BOOL _isRich;
}

@property (readonly, nonatomic) BOOL isSavedAsRich;
@property (nonatomic) BOOL isDirty;
@property (readonly, copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isRich;
@property (readonly, nonatomic) MFSyncedSignatureContentsFile *syncedFile;
@property (readonly, copy, nonatomic) NSData *webArchiveData;
@property (copy, nonatomic) WebArchive *webArchive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryRepresentation;
- (void)_makeWebArchiveDataIfNeeded;
- (id)initWithName:(id)a0 uniqueId:(id)a1;
- (void)reloadFromDisk;
- (void)removeContentFromDisk;
- (BOOL)saveContentToDisk;

@end
