@class NSMapTable;

@interface VUIPlayerValidationManager : NSObject

@property (retain, nonatomic) NSMapTable *playerCounts;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)addReferenceForPlayer:(id)a0;
- (void)removeReferenceForPlayer:(id)a0;
- (void)removeReferenceForPlayer:(id)a0 stoppingIfNeeded:(BOOL)a1;

@end
