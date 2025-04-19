@class CNCDSaveContext;

@interface CNCDContainerDiffApplicator : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (void)applyDiff:(id)a0 toContainer:(id)a1;
- (void)forEachContainerMatchingContainer:(id)a0 perform:(id /* block */)a1;
- (id)initWithSaveContext:(id)a0;
- (void)setGuardianRestricted:(BOOL)a0 onContainer:(id)a1;

@end
