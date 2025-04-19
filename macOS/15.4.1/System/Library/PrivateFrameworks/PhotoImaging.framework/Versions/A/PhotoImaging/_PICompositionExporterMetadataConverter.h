@class NSString;

@interface _PICompositionExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSemanticStyleMakeNoteProperties:(id)a0 toImageProperties:(id)a1;
- (id)photoFeatureFlags:(id)a0 error:(id *)a1;
- (id)photoProcessingFlagsFromProperties:(id)a0 error:(id *)a1;
- (BOOL)setImageVariation:(id)a0 properties:(id)a1 error:(id *)a2;
- (BOOL)setPhotoFeatureFlags:(id)a0 properties:(id)a1 error:(id *)a2;
- (BOOL)setPhotoProcessingFlags:(id)a0 properties:(id)a1 error:(id *)a2;
- (id)videoMetadataForVariation:(id)a0 error:(id *)a1;

@end
