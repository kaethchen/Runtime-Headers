@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource

@property (readonly, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)invitationForObjectID:(id)a0;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
