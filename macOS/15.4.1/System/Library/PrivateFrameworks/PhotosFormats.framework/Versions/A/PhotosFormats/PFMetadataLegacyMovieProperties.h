@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)audioSampleRate;
- (id)nominalFrameRate;
- (id)software;
- (BOOL)isMovie;
- (id)cameraModel;
- (BOOL)isSloMo;
- (id)audioDataRate;
- (id)audioTrackFormat;
- (id)cameraMake;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)videoCodecName;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;
- (id)_makeDateTimeProperties;
- (id)_makeGPSProperties;
- (id)_makeGeometryProperties;
- (id)audioTrackFormatFlags;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)plistForEncoding;
- (id)videoDataRate;

@end
