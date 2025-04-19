@class NSOrderedSet, NSString;

@interface TVISCacheDeleteInfo : NSObject

@property (readonly, nonatomic) struct __CFDictionary { } *infoDictionary;
@property (readonly, nonatomic) unsigned long long purgeableAmount;
@property (readonly, nonatomic) NSOrderedSet *purgeableItems;
@property (readonly, nonatomic) NSString *volume;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0;
- (id)infoByAddingInfo:(id)a0;
- (id)initWithPurgeableItems:(id)a0 volume:(id)a1;

@end
