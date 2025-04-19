@class NSString, NSDate;

@interface AMDictationCommandWorkflowMetaData : AMWorkflowMetaData

@property BOOL dictationCommandEnabled;
@property (copy) NSString *dictationCommandTitle;
@property (copy) NSString *dictationCommandIdentifier;
@property (copy) NSString *dictationCommandWorkflowURLString;
@property (retain) NSDate *dictationCommandTimeStamp;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)metaData;
- (id)initWithPersonality:(id)a0;
- (void)setFromDictionary:(id)a0;
- (void)syncMetaDataForWorkflow:(id)a0 atURL:(id)a1;
- (void)updateDictationCommandProperties:(id)a0;
- (void)updateDictationCommandPropertiesWithURL:(id)a0;

@end
