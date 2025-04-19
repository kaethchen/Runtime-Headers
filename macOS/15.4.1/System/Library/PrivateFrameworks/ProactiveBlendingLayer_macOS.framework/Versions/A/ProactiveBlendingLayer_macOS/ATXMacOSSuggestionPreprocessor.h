@class NSString;

@interface ATXMacOSSuggestionPreprocessor : NSObject <ATXSuggestionPreprocessorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)suggestionsByPreprocessingRankedSuggestions:(id)a0 forConsumerSubType:(unsigned char)a1;
- (id)suggestionsWithInvalidSuggestionsRemoved:(id)a0;

@end
