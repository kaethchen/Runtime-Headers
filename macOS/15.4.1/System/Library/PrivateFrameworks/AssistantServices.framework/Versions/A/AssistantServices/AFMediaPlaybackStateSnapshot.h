@class NSString, NSDate;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, copy, nonatomic) NSDate *nowPlayingTimestamp;
@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) BOOL isProxyGroupPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)initWithPlaybackState:(long long)a0 nowPlayingTimestamp:(id)a1 mediaType:(id)a2 groupIdentifier:(id)a3 isProxyGroupPlayer:(BOOL)a4;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)serializedBackingStore;

@end
