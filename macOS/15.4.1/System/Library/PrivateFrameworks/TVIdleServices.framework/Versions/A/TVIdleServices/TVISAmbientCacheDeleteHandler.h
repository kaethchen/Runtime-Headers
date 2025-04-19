@class NSArray;

@interface TVISAmbientCacheDeleteHandler : NSObject

@property (readonly, copy, nonatomic) NSArray *services;

- (void).cxx_destruct;
- (void)start;
- (id)initWithServices:(id)a0;
- (id)_sortedServices;
- (struct __CFDictionary { } *)_periodicPurgeHandlerWithUrgency:(long long)a0 info:(struct __CFDictionary { } *)a1;
- (void)_purgeCancelHandler;
- (struct __CFDictionary { } *)_purgeHandlerWithUrgency:(long long)a0 info:(struct __CFDictionary { } *)a1;
- (struct __CFDictionary { } *)_purgeableAmountHandlerWithUrgency:(long long)a0 info:(struct __CFDictionary { } *)a1;

@end
