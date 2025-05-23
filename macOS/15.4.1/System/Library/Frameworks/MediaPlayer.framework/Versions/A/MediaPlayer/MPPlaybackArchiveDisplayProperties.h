@class NSString, NSMutableDictionary, NSData, NSURL;

@interface MPPlaybackArchiveDisplayProperties : NSObject <MPMutablePlaybackArchiveDisplayProperties, NSCopying, NSSecureCoding> {
    BOOL _final;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSData *artworkImageData;
@property (readonly, copy, nonatomic) NSURL *artworkImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)setSubtitle:(id)a0;
- (id)copyWithOptions:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 artworkImageData:(id)a2;
- (void)setArtworkImageData:(id)a0;
- (void)setArtworkImageURL:(id)a0;

@end
