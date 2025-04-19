@class NSArray, NSError, SHMediaItem;

@interface SHHaptic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *tracks;
@property (readonly) NSError *tracksError;
@property (readonly) SHMediaItem *mediaItem;
@property (readonly) NSArray *spatialOffsets;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHapticTracks:(id)a0 representingMediaItem:(id)a1 spatialOffsets:(id)a2 error:(id)a3;
- (id)tracksWithError:(id *)a0;

@end
