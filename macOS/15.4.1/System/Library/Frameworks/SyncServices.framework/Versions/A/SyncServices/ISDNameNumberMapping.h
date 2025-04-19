@class NSString, NSMutableDictionary, ISDNameNumberProvider;

@interface ISDNameNumberMapping : NSObject {
    NSString *_mappingName;
    int _last;
    NSMutableDictionary *_nameToNumber;
    NSMutableDictionary *_numberToName;
    ISDNameNumberProvider *_providedBy;
    NSString *_zeroMapping;
}

- (void)dealloc;
- (void)clear;
- (BOOL)canBeMergedWith:(id)a0;
- (BOOL)isClientMapping;
- (BOOL)isEntityMapping;
- (id)nameToNumberMap;
- (void)setInt:(int)a0 forName:(id)a1;
- (void)setZeroMapping:(id)a0;
- (BOOL)hasMappingForName:(id)a0;
- (id)initMappingNamed:(id)a0 withNameNumberMap:(id)a1 providedBy:(id)a2;
- (int)intForName:(id)a0;
- (int)mapNextIntToName:(id)a0;
- (void)mergeNameNumberMapping:(id)a0;
- (void)mergeOrReplaceFromMap:(id)a0;
- (id)nameForInt:(int)a0;
- (id)nameForNumber:(id)a0;
- (id)numberForName:(id)a0;
- (void)refreshFromNameNumberMap:(id)a0;
- (void)setNumber:(id)a0 forName:(id)a1;

@end
