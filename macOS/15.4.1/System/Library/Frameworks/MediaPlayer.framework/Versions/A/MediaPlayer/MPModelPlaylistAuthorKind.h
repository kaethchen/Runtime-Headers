@interface MPModelPlaylistAuthorKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;

+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0;

- (id)humanDescription;

@end
