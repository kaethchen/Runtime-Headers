@class NSDictionary, NSString;

@interface AMPMPPlayerControllerNowPlaying : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *item;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long count;

+ (id)nowPlayingWithItem:(id)a0 itemIdentifier:(id)a1 artworkIdentifier:(id)a2 index:(long long)a3 count:(long long)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
