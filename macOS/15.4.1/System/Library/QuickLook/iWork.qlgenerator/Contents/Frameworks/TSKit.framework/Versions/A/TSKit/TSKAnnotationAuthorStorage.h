@class NSSet, NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject

@property (retain, nonatomic) NSMutableSet *mutableAuthors;
@property (readonly) NSSet *authors;

- (id)description;
- (void).cxx_destruct;
- (void)addAuthor:(id)a0;
- (id)nextAuthorColor;
- (unsigned int)delayedArchivingPriority;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;
- (id)packageLocator;
- (void)removeAuthor:(id)a0;
- (BOOL)shouldDelayArchiving;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)authorInStorageAddingAuthorIfNecessary:(id)a0;
- (id)authorInStorageMatchingAuthor:(id)a0;
- (id)authorInStorageMatchingAuthor:(id)a0 name:(id)a1;
- (id)authorsMatchingPrivateIDs:(id)a0;
- (id)preferredAuthorMatchingPrivateID:(id)a0 name:(id)a1;
- (id)preferredAuthorMatchingPrivateIDs:(id)a0 name:(id)a1;

@end
