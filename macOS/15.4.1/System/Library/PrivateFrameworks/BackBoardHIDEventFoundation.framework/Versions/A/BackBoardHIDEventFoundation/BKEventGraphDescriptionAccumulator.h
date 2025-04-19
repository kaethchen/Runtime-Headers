@class _BKGraphStructureNode;

@interface BKEventGraphDescriptionAccumulator : NSObject {
    _BKGraphStructureNode *_topLevel;
    _BKGraphStructureNode *_current;
}

- (id)init;
- (void).cxx_destruct;

@end
