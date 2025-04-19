@class NSString, NSMutableDictionary, NSURL, UVTransaction, NSObject;
@protocol OS_dispatch_queue;

@interface SEMIndexSite : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_objectCache;
}

@property (nonatomic) BOOL isUnavailableSoon;
@property (retain, nonatomic) UVTransaction *uvTransaction;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSURL *indexSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) NSURL *skitDirectoryURL;
@property (readonly, nonatomic) NSURL *ftsDirectoryURL;
@property (readonly, nonatomic) NSURL *ftsDatabaseURL;
@property (readonly, nonatomic) NSString *personaIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)cachedObjectForKey:(id)a0 initBlock:(id /* block */)a1;
- (id)initWithType:(unsigned char)a0 indexSiteURL:(id)a1 dataProtectionClass:(int)a2 personaIdentifier:(id)a3;

@end
