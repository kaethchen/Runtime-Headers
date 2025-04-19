@class NSString, NSArray, NSDate;

@interface PODPlaylist : PODContentEntity <PODPlaylistProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) NSArray *episodeSyncIDs;
@property (readonly, nonatomic) long long syncID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUsingPropertiesFrom:(id)a0;

@end
