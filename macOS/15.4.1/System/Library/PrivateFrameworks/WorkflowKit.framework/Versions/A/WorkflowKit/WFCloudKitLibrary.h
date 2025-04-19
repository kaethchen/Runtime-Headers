@class NSString, NSDictionary, CKRecordID, WFFileRepresentation, NSData;

@interface WFCloudKitLibrary : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) WFFileRepresentation *dataFileRepresentation;
@property (nonatomic) long long syncHash;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLibraryRecordID:(id)a0;
+ (id)libraryIdentifierFromRecordID:(id)a0 error:(id *)a1;
+ (id)recordIDWithZoneID:(id)a0 libraryIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLibraryRecord:(id)a0 zoneID:(id)a1;
- (id)libraryIdentifierWithError:(id *)a0;
- (id)ensureFileAssets;
- (id)initWithIdentifier:(id)a0 version:(id)a1 data:(id)a2 syncHash:(long long)a3;

@end
