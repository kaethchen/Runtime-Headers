@class NSString, PPLocalContactStore, PPSQLDatabase, PPLocalNamedEntityStore;

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor> {
    PPSQLDatabase *_db;
    PPLocalContactStore *_contactStore;
    PPLocalNamedEntityStore *_namedEntityStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void)importContactsDataWithShouldContinueBlock:(id /* block */)a0;

@end
