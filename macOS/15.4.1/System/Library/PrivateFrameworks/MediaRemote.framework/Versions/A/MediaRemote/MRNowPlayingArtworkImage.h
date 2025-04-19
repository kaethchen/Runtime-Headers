@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)type;
- (id)copyImageData;
- (BOOL)hasArtworkData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end
