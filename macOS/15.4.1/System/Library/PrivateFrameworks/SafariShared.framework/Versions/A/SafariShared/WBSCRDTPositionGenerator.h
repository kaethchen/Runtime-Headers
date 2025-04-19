@class NSDictionary;
@protocol WBSCRDTPositionGeneratorDelegate;

@interface WBSCRDTPositionGenerator : NSObject {
    NSDictionary *_recordNamesToPositions;
}

@property (readonly, weak, nonatomic) id<WBSCRDTPositionGeneratorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_enumerateRecordNamesAfterRecordWithName:(id)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateRecordNamesBeforeRecordWithName:(id)a0 usingBlock:(id /* block */)a1;
- (id)_generatePositionBetweenPosition:(id)a0 andPosition:(id)a1;
- (id)_generatePositionsForStrides:(id)a0;
- (id)_positionForRecordName:(id)a0;
- (id)_stridesForSiblingRecords:(id)a0;
- (void)generatePositionsForChildRecordNamesGroupedByParentFolders:(id)a0;
- (id)positionForBookmarkWithRecordName:(id)a0;

@end
