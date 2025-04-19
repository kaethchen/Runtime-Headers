@class NSString, NSArray;

@interface AMPLibraryAddToCloudMusicLibraryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned long long commandID;
@property (nonatomic) unsigned long long playlistID;
@property (nonatomic) unsigned long long parentPlaylistID;
@property (nonatomic) unsigned long long curatorAdamID;
@property (nonatomic) BOOL flag;
@property (retain, nonatomic) NSString *playlistTitle;
@property (retain, nonatomic) NSString *cloudPlaylistID;
@property (nonatomic) unsigned long long insertAfterPosition;
@property (nonatomic) unsigned int atpusEditValue;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) unsigned int uint32Value;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSArray *optimisticAddArray;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
