@class _TtC12SmartReplies31SRSmartRepliesSuggestionRequest, NSArray, NSString, NSDate;

@interface SROSmartRepliesSuggestionRequest : NSObject {
    _TtC12SmartReplies31SRSmartRepliesSuggestionRequest *_underlyingRequest;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *receivedMessages;
@property (copy, nonatomic) NSArray *senderMessages;
@property (nonatomic) BOOL includeLowConfidenceSuggestions;
@property (nonatomic) BOOL skipPopulatingMetadata;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSDate *languageLastChangedDate;
@property (nonatomic) BOOL includesDynamicSuggestions;
@property (copy, nonatomic) NSDate *requestDate;

+ (id)_unwrappedMessagesForWrappedMessages:(id)a0;
+ (id)_wrappedMessagesForUnwrappedMessages:(id)a0;

- (void).cxx_destruct;
- (void)setReceivedMessages:(id)a0;
- (id)initWithType:(unsigned long long)a0 receivedMessages:(id)a1;

@end
