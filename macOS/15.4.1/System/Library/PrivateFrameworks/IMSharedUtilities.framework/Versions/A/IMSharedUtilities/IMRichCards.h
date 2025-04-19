@class NSArray;

@interface IMRichCards : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ cards;
}

@property (nonatomic, readonly) NSArray *cards;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)expandToIndividualCard;
- (id)initWithCardArray:(id)a0;
- (id)initWithCards:(id)a0;
- (id)previewText;
- (id)relayDictionaryRepresentation;
- (id)suggestedActionsList;
- (id)suggestedRepliesList;
- (void)updateUrlToTransferMap:(id)a0;

@end
