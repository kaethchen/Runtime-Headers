@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface DEExtensionManager : NSObject

@property (retain, nonatomic) NSArray *extensions;
@property (copy, nonatomic) id /* block */ afterExtendedBlock;
@property (nonatomic) BOOL extendedLoaded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)loadExtensions;
- (id)extensionForIdentifier:(id)a0;
- (id)extensionsWithFilter:(id)a0;

@end
