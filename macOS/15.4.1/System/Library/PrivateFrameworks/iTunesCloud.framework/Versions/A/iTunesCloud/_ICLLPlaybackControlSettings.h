@class _ICLLAvailability, _ICLLAutoPlaySource, _ICLLNoGenerationSource, _ICLLRadioSource;

@interface _ICLLPlaybackControlSettings : PBCodable <NSCopying> {
    _ICLLAutoPlaySource *_autoPlay;
    _ICLLAvailability *_availability;
    _ICLLNoGenerationSource *_noGeneration;
    _ICLLRadioSource *_radio;
    int _repeatMode;
    int _shuffleMode;
    int _trackGenerationSource;
    struct { unsigned char repeatMode : 1; unsigned char shuffleMode : 1; unsigned char trackGenerationSource : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
