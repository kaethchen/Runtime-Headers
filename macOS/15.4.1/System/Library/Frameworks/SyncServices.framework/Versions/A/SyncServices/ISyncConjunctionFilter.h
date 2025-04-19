@class NSArray;

@interface ISyncConjunctionFilter : NSObject <ISyncFiltering> {
    NSArray *_filters;
    NSArray *_supportedEntityNames;
    BOOL _isAndConjunction;
    BOOL _shouldApplyUnsupportedRecords;
    BOOL _ignoreLocals;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFilters:(id)a0 isAndConjunction:(BOOL)a1 shouldApplyUnsupportedRecords:(BOOL)a2;
- (void)_computeSupportedEntityNames;
- (id)initWithFilters:(id)a0 isAndConjunction:(BOOL)a1 shouldApplyUnsupportedRecords:(BOOL)a2 ignoreLocalRecords:(BOOL)a3;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;

@end
