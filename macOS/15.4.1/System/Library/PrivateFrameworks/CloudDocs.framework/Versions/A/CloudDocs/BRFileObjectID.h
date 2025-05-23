@class NSString, NSNumber;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *asString;
@property (readonly, nonatomic) BOOL isFolderOrAliasID;
@property (readonly, nonatomic) BOOL isDocumentID;
@property (readonly, nonatomic) NSNumber *folderID;
@property (readonly, nonatomic) NSNumber *documentID;
@property (readonly, nonatomic) NSNumber *itemDBRowID;
@property (readonly, nonatomic) unsigned long long rawID;
@property (readonly, nonatomic) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)fileObjectIDForURL:(id)a0 allocateDocID:(BOOL)a1 error:(id *)a2;
+ (id)fileObjectIDWithString:(id)a0;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCloudDocsRoot;
- (BOOL)isAppLibraryDocumentsFolder;
- (BOOL)isAppLibraryRoot;
- (BOOL)isEqualToFileObjectID:(id)a0;
- (BOOL)isFpfsItem;
- (BOOL)isRootContainerItem;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;

@end
