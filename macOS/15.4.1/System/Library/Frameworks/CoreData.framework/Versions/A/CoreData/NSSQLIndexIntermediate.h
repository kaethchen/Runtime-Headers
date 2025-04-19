@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    BOOL _isHandlingExpressions;
}

- (void)dealloc;
- (id)governingEntity;
- (id)generateSQLStringInContext:(id)a0;
- (id)initForIndex:(id)a0 withScope:(id)a1;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
