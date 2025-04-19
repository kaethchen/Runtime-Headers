@interface IMChipReply : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ suggestion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSuggestion:(id)a0;
- (id)suggestedReplyBody;

@end
