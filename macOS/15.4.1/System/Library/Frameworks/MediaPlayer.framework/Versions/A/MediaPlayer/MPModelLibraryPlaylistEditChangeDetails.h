@class NSString, NSArray, MPModelObject;

@interface MPModelLibraryPlaylistEditChangeDetails : NSObject

@property (copy, nonatomic) NSString *previousPositionIdentifier;
@property (copy, nonatomic) NSString *previousReferenceIdentifier;
@property (copy, nonatomic) NSString *previousPlaylistName;
@property (copy, nonatomic) NSArray *changesApplied;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) MPModelObject *item;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *itemPositionIdentifier;
@property (retain, nonatomic) MPModelObject *referenceItem;
@property (copy, nonatomic) NSString *referenceItemIdentifier;
@property (copy, nonatomic) NSString *referenceItemPositionIdentifier;
@property (nonatomic) BOOL isLastItem;
@property (copy, nonatomic) NSString *playlistName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)_descriptionForType:(long long)a0;
- (id)_initWithType:(long long)a0 itemIdentifier:(id)a1;
- (id)initWithType:(long long)a0 itemIdentifier:(id)a1;

@end
