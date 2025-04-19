@class NSNumber;

@interface AMPLibPlaylistEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *mediaItemID;
@property (retain, nonatomic) NSNumber *playlistEntryID;
@property (retain, nonatomic) NSNumber *position;

+ (id)playlistItemForMediaItemID:(id)a0 playlistEntryID:(id)a1 position:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
