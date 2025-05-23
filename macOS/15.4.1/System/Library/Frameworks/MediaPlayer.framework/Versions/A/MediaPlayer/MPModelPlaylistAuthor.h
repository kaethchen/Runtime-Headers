@class MPModelPlaylist, MPModelSocialPerson;

@interface MPModelPlaylistAuthor : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelSocialPerson *socialProfile;
@property (nonatomic) unsigned long long role;
@property (nonatomic) int position;
@property (readonly, nonatomic) BOOL isPendingApproval;

+ (void)__MPModelPropertyPlaylistAuthorIsPendingApproval__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistAuthorPosition__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistAuthorRole__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistAuthorPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistAuthorSocialProfile__MAPPING_MISSING__;
+ (id)__isPendingApproval_KEY;
+ (id)__playlist_KEY;
+ (id)__position_KEY;
+ (id)__role_KEY;
+ (id)__socialProfile_KEY;
+ (id)kindWithVariants:(unsigned long long)a0;

@end
