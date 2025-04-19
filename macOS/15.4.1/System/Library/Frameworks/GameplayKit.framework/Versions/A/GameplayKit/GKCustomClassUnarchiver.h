@class NSString, NSMutableDictionary;

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_cache;
    BOOL _linkedOnOrAfterSecureUnarchive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)_currentAppModuleName;
- (id)_findValidClassName:(id)a0;
- (id)_mangledSwiftClassName:(id)a0 moduleName:(id)a1;

@end
