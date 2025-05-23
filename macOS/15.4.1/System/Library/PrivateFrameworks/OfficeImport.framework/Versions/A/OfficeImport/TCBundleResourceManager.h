@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {
    NSMutableDictionary *mPackageMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)instance;
+ (void)disposeInstance;

- (id)init;
- (void).cxx_destruct;
- (id)dataForResource:(id)a0 ofType:(id)a1 inPackage:(id)a2 cacheResult:(BOOL)a3;
- (id)packageEntryForResource:(id)a0 ofType:(id)a1 inPackage:(id)a2;
- (id)packageWithName:(id)a0 cacheResult:(BOOL)a1;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)xmlDocumentForResource:(id)a0 ofType:(id)a1 inPackage:(id)a2;

@end
