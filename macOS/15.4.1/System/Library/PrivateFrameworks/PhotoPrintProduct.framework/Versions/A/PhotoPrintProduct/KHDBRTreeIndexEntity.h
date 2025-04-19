@class NSMutableArray;

@interface KHDBRTreeIndexEntity : KHDBEntity {
    NSMutableArray *_updateFields;
}

- (void)dealloc;
- (void)addRTreeMinFieldName:(id)a0 maxFieldName:(id)a1;
- (void)createRTreeEntryForModelId:(id)a0 minLatitude:(double)a1 maxLatitude:(double)a2 minLongitude:(double)a3 maxLongitude:(double)a4;
- (void)createRTreeEntryForModelId:(id)a0 minLatitude:(double)a1 maxLatitude:(double)a2 minLongitude:(double)a3 maxLongitude:(double)a4 scaleFactor:(long long)a5;
- (BOOL)createTableIfMissing;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (void)updateRTreeEntryForModelId:(id)a0 minLatitude:(double)a1 maxLatitude:(double)a2 minLongitude:(double)a3 maxLongitude:(double)a4;

@end
