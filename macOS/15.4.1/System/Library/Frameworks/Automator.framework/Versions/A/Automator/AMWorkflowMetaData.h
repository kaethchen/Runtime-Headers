@class AMWorkflowPersonality, NSString, NSDictionary, AMType, NSImage;

@interface AMWorkflowMetaData : NSObject

@property (weak) AMWorkflowPersonality *personality;
@property (copy) NSDictionary *metaDataFromDisk;
@property (copy) NSString *documentSaveName;
@property (readonly, nonatomic) NSDictionary *metaData;
@property (readonly, nonatomic) NSString *headerInputType;
@property (copy) NSDictionary *infoPlistFromDisk;
@property (readonly, copy, nonatomic) NSString *workflowTypeIdentifier;
@property (readonly, nonatomic) AMType *inputType;
@property (readonly, nonatomic) AMType *outputType;
@property (readonly, nonatomic) NSImage *quickLookThumbnailImage;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)workflowMetaDataForPersonality:(id)a0 dictionary:(id)a1;

- (id)copy;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithPersonality:(id)a0;
- (void)setFromDictionary:(id)a0;
- (void)syncMetaDataForWorkflow:(id)a0 atURL:(id)a1;

@end
