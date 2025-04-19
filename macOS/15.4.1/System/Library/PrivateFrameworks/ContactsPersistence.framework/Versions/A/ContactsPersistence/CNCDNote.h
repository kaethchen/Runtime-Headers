@class NSString, ABCDContact;
@protocol CNCDNoteAccessViolation;

@interface CNCDNote : ABCDOwnedObject

@property (class, readonly) id<CNCDNoteAccessViolation> accessViolationReporter;

@property (retain, nonatomic) NSString *primitiveText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) ABCDContact *contact;

+ (id)insertOwnedObjectWithEntityName:(id)a0 inManagedObjectContext:(id)a1;

- (void)setOwner:(id)a0;
- (id)owner;
- (id)uniqueId;
- (void)setText:(id)a0;

@end
