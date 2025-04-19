@class NSString, NSPersistentCloudKitContainerOptions, NSURL, NSDictionary, NSMutableDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {
    NSMutableDictionary *_options;
}

@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *type;
@property (copy) NSString *configuration;
@property (copy) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (getter=isReadOnly) BOOL readOnly;
@property double timeout;
@property (readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property BOOL shouldAddStoreAsynchronously;
@property BOOL shouldMigrateStoreAutomatically;
@property BOOL shouldInferMappingModelAutomatically;

+ (id)persistentStoreDescriptionWithURL:(id)a0;
+ (id)inMemoryPersistentStoreDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0;
- (id)mirroringDelegate;
- (void)setOption:(id)a0 forKey:(id)a1;
- (void)setOption:(id)a0 forMirroringKey:(id)a1;
- (id)mirroringOptions;
- (void)setMirroringDelegate:(id)a0;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)a0;
- (void)setUsesPersistentHistoryTracking:(BOOL)a0;
- (void)setValue:(id)a0 forPragmaNamed:(id)a1;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (BOOL)usesPersistentHistoryTracking;

@end
