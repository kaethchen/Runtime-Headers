@class NSSet, TIInputContextHistory;

@interface NSInputContextHistory : NSObject

@property (readonly, nonatomic) TIInputContextHistory *tiInputContextHistory;
@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;

+ (id)inputContextHistoryWithTIInputContextHistory:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)addEntry:(id)a0;
- (void)addNewParticipantWithIdentifier:(id)a0 name:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2 entryIdentifier:(id)a3;
- (void)didFinishAddingEntriesToInputContextHistory;
- (id)initWithInputContextHistory:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (id)initWithThreadIdentifier:(id)a0 participantsIDtoNamesMap:(id)a1 firstPersonIDs:(id)a2 primaryRecipients:(id)a3 secondaryRecipients:(id)a4 infoDict:(id)a5;
- (void)updateRecipientNames:(id)a0;

@end
