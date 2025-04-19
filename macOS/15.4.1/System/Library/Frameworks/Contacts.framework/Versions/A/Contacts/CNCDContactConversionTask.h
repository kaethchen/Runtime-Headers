@class NSArray, CNContactKeyVector, NSFetchRequest, CNMultiDictionary;

@interface CNCDContactConversionTask : CNTask

@property (readonly, copy) NSArray *impls;
@property (readonly, copy) CNContactKeyVector *availableKeys;
@property (readonly) NSFetchRequest *fetchRequestPrototype;
@property (retain) NSArray *unlinkedImpls;
@property (retain) CNMultiDictionary *linkedImpls;
@property (retain) NSArray *contacts;

+ (id)os_log;

- (id)run;
- (void).cxx_destruct;
- (void)analyzeLinks;
- (void)fetchOtherLinkedContacts;
- (id)initWithContacts:(id)a0 availableKeys:(id)a1 fetchRequestPrototype:(id)a2;
- (void)unifyContacts;

@end
