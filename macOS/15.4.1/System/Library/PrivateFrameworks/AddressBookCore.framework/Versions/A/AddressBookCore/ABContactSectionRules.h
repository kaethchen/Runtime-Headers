@class NSArray, NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface ABContactSectionRules : NSObject {
    NSMutableArray *_cachedHeaders;
    NSDictionary *_cachedLocalizedHeaders;
    NSArray *_cachedSortedHeaders;
    struct UCollator { } *_collator;
}

@property (readonly) NSArray *sectionHeaders;
@property (readonly) NSArray *sectionIndices;
@property (readonly) NSString *collationKey;
@property (retain, nonatomic) NSMutableDictionary *plist;

+ (id)rulesForCurrentLocalization;

- (void)dealloc;
- (id)init;
- (id)nameTransform;
- (id)sectionForName:(id)a0;
- (id)localizedSectionHeaders;
- (id)sortedHeaders;

@end
