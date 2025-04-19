@class NSPredicate, NSArray, NSSet;

@interface MKFCKEventTrigger : MKFCKTrigger

@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSArray *guestEvents;
@property (nonatomic) long long recurrencesInt;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *guests;
@property (retain, nonatomic) NSSet *users;

+ (id)fetchRequest;

- (id)_decodeEventAttributeValue:(id)a0 trigger:(id)a1 context:(id)a2;
- (id)_decodeEventDictionary:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)_encodeEvent:(id)a0 encodedEventInCloud:(id)a1 accessories:(id)a2 users:(id)a3 guests:(id)a4 shouldRemoveEvent:(BOOL *)a5 context:(id)a6;
- (id)_encodeEventAttributeValue:(id)a0 accessories:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
