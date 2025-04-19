@class ABRecordContext, NSMutableDictionary;

@interface ABImportRecordFactory : NSObject {
    ABRecordContext *_recordContext;
    NSMutableDictionary *_importedUidMap;
}

- (void).cxx_destruct;
- (id)importGroupWithUniqueId:(id)a0;
- (id)importPersonWithUniqueId:(id)a0;
- (id)initWithRecordContext:(id)a0;

@end
