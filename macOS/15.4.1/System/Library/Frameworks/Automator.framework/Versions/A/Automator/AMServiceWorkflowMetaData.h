@class AMServiceWorkflowPersonality, NSString, NSDictionary, NSData, NSColor;

@interface AMServiceWorkflowMetaData : AMInputOutputWorkflowMetadata

@property (readonly, nonatomic) NSData *_backgroundColorDataForSaving;
@property (readonly, nonatomic) unsigned long long _presentationModeFromAppKit;
@property (readonly, nonatomic) NSDictionary *_metaDataWithoutPresentationMode;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *backgroundColorName;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSData *customImageFileData;
@property (copy, nonatomic) NSString *customImageFileExtension;
@property (readonly, weak, nonatomic) AMServiceWorkflowPersonality *serviceWorkflowPersonality;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)metaData;
- (id)initWithPersonality:(id)a0;
- (id)quickLookThumbnailImage;
- (void)_updatePresentationModeBasedOnMetaData;
- (void)setFromDictionary:(id)a0;

@end
