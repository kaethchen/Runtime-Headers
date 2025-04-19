@class NSMutableArray, PLPhotoLibrary;

@interface PLCloudRecordOrganizer : NSObject {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly) NSMutableArray *assetRecordsWithContainerChange;
@property (readonly) NSMutableArray *albumRecordsWithContainerChange;
@property (readonly) NSMutableArray *personRecords;
@property (readonly) NSMutableArray *scopeRecords;
@property (readonly) NSMutableArray *masterRecords;
@property (readonly) NSMutableArray *assetRecords;
@property (readonly) NSMutableArray *albumRecords;
@property (readonly) NSMutableArray *memoryRecords;
@property (readonly) NSMutableArray *faceCropRecords;
@property (readonly) NSMutableArray *deleteRecords;
@property (readonly) NSMutableArray *deletePersonRecords;
@property (readonly) NSMutableArray *expungedRecords;
@property (readonly) NSMutableArray *suggestionRecords;
@property (readonly) NSMutableArray *socialGroupRecords;

+ (BOOL)records:(id)a0 containsScopedIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)organizeRecords:(id)a0;

@end
