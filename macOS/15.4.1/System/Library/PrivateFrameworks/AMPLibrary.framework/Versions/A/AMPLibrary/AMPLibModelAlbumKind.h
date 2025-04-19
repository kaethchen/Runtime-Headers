@interface AMPLibModelAlbumKind : AMPLibModelKind <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long variants;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
