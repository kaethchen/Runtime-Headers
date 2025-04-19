@class KHProject, NSString, NSMutableDictionary;

@interface KHProjectJournalEntry : KHModel {
    long long _projectId;
    unsigned long long _type;
    NSString *_source;
    NSString *_date;
    NSString *_entryText;
    NSString *_imageKey;
    long long _linkedEntryId;
    NSMutableDictionary *_attributeCache;
}

@property (readonly, nonatomic) KHProject *project;

- (void)dealloc;
- (id)date;
- (void)setType:(unsigned long long)a0;
- (unsigned long long)type;
- (id)attributes;
- (void)remove;
- (id)source;
- (void)setDate:(id)a0;
- (id)clone;
- (void)setSource:(id)a0;
- (id)attributeForKey:(id)a0;
- (void)removeAttributeForKey:(id)a0;
- (long long)projectId;
- (void)setProjectId:(long long)a0;
- (void)cacheEntryText:(id)a0;
- (void)cacheProjectId:(long long)a0;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (void)cacheDate:(id)a0;
- (void)cacheImageKey:(id)a0;
- (void)cacheLinkedEntryId:(long long)a0;
- (void)cacheSource:(id)a0;
- (void)cacheType:(unsigned long long)a0;
- (id)cloneInDatabase:(id)a0;
- (id)entryText;
- (id)imageKey;
- (BOOL)isProjectModel;
- (long long)linkedEntryId;
- (id)linkedJournalEntry;
- (void)loadAttributes;
- (void)removeLinkedJournalEntry;
- (void)setEntryText:(id)a0;
- (void)setEntryText:(id)a0 force:(BOOL)a1;
- (void)setImageKey:(id)a0;
- (void)setLinkedEntryId:(long long)a0;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (long long)sortByType:(id)a0;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
