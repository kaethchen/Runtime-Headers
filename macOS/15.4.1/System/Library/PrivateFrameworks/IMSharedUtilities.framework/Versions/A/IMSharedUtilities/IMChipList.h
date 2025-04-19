@class NSArray;

@interface IMChipList : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ chipList;
}

@property (nonatomic, readonly) NSArray *chipList;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ replied;

+ (id)merge:(id)a0 with:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)messageItem;
- (id)initWithChipArray:(id)a0;
- (id)initWithChipArray:(id)a0 replied:(BOOL)a1;
- (id)initWithChipList:(id)a0;
- (id)initWithChipList:(id)a0 replied:(BOOL)a1;
- (id)relayDictionaryRepresentation;
- (id)suggestedActions;
- (id)suggestedReplies;

@end
