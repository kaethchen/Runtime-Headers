@class _NSCollectionLayoutSectionGeometryTranslator, NSArray, NSDictionary, _NSOrderedRangeIndexer, _NSRTree;

@interface _NSCollectionLayoutSolutionState : NSObject

@property (readonly, nonatomic) NSArray *bookmarks;
@property (readonly, nonatomic) _NSRTree *geometricIndexer;
@property (readonly, nonatomic) _NSOrderedRangeIndexer *itemRangeIndexer;
@property (readonly, nonatomic) NSDictionary *auxiliaryRangeIndexerKindDict;
@property (readonly, nonatomic) _NSCollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithGeometryConverter:(id)a0;
- (id)initWithGeometryTranslator:(id)a0 bookmarks:(id)a1 geometricIndexer:(id)a2 itemRangeIndexer:(id)a3 auxiliaryRangeIndexerDict:(id)a4;

@end
