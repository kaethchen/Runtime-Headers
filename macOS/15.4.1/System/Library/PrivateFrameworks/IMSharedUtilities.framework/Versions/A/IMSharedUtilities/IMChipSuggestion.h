@class NSString;

@interface IMChipSuggestion : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ displayText;
    void /* unknown type, empty encoding */ postback;
    void /* unknown type, empty encoding */ inReplyToID;
}

@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *postback;
@property (nonatomic, copy) NSString *inReplyToID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDisplayText:(id)a0 postback:(id)a1 inReplyToID:(id)a2;

@end
