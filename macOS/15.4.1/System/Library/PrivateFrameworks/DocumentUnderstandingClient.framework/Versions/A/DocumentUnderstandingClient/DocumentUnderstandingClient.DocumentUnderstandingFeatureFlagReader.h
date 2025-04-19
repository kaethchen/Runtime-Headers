@interface DocumentUnderstandingClient.DocumentUnderstandingFeatureFlagReader : NSObject

@property (class, nonatomic, readonly) BOOL isBackboneModelEnabled;
@property (class, nonatomic, readonly) BOOL isTopicClassificationModelEnabled;
@property (class, nonatomic, readonly) BOOL isCategoryClassificationModelEnabled;
@property (class, nonatomic, readonly) BOOL isFoundInModelsEnabled;
@property (class, nonatomic, readonly) BOOL isIndexNonfileDocumentsEnabled;
@property (class, nonatomic, readonly) BOOL isSearchAndOrganizationDocumentIngestEnabled;
@property (class, nonatomic, readonly) BOOL isAutonamingFromMessagesEnabled;
@property (class, nonatomic, readonly) BOOL isFoundInUseLLMEnabled;
@property (class, nonatomic, readonly) BOOL isFoundInUseLLMMultilingualAdapterEnabled;
@property (class, nonatomic, readonly) BOOL isFoundInUseLLMExtendedLanguagesEnabled;
@property (class, nonatomic, readonly) BOOL isPIRGeocodingEnabled;

- (id)init;

@end
