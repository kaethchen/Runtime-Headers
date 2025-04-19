@class SHKCollaborationService, SFCollaborationCloudSharingResult;
@protocol SFCollaborationItem;

@interface SHKCollaborationContext : NSObject

@property (readonly, nonatomic) BOOL isCollaborationMode;
@property (readonly, nonatomic) id<SFCollaborationItem> collaborationItem;
@property (readonly, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) SHKCollaborationService *collaborationService;

- (void).cxx_destruct;
- (id)initWithCollaborationMode:(BOOL)a0 collaborationItem:(id)a1 cloudSharingResult:(id)a2 collaborationService:(id)a3;

@end
