@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind

@property (readonly, nonatomic) MPModelPodcastEpisodeKind *episodeKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
