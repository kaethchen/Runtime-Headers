@class NSArray, NSDictionary, NSString, AMType;

@interface AMInputOutputWorkflowMetadata : AMWorkflowMetaData

@property (class, readonly, nonatomic) NSDictionary *_legacyServiceKeyMapping;

@property (copy) NSDictionary *applicationBundleIDsByPath;
@property (copy) NSArray *applicationPaths;
@property (readonly, nonatomic) NSArray *orderedApplicationBundleIDs;
@property (readonly, copy, nonatomic) NSString *inputTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *outputTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *inputOptionTitle;
@property (readonly, nonatomic) BOOL inputTypeUnknown;
@property (readonly, nonatomic) BOOL hasNoInput;
@property (readonly, nonatomic) BOOL canReplaceSelectedText;
@property (nonatomic) BOOL replacesSelectedText;
@property (readonly, nonatomic) BOOL canSelectInputOption;
@property (nonatomic) BOOL processesInput;
@property (nonatomic) BOOL useAutomaticInputType;
@property (retain, nonatomic) AMType *inputType;
@property (retain, nonatomic) AMType *outputType;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)metaData;
- (id)initWithPersonality:(id)a0;
- (id)headerInputType;
- (void)setFromDictionary:(id)a0;

@end
