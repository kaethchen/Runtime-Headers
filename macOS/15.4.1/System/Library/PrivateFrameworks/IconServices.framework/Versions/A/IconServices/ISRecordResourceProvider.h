@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (readonly) NSString *fileExtension;
@property (retain) NSString *templateType;

- (id)description;
- (void).cxx_destruct;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (BOOL)_isAppleResource;
- (BOOL)_shouldTreatLikeApp;
- (void)configureProviderFromDescriptor:(id)a0;
- (id)iconResource;
- (id)initWithRecord:(id)a0 fileExtension:(id)a1 options:(unsigned long long)a2;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (void)resolveResources;
- (void)setPlatformWithBundle:(id)a0;
- (id)templateIconResource;

@end
