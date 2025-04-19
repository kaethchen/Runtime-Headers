@class NSString, AVMovieAtom, NSDictionary;

@interface AVAssetAnalysisMovieParsingMessage : AVAssetAnalysisMessage {
    NSDictionary *_movieParsingMessageFigDictionary;
    AVMovieAtom *_movieAtom;
}

@property (readonly) NSString *diagnosticInformation;
@property (readonly) NSString *messageType;
@property (readonly) AVMovieAtom *movieAtom;
@property (readonly) NSString *mediaType;
@property (readonly) int trackID;

+ (id)assetAnalysisMovieParsingMessageWithFigDictionary:(id)a0;

- (void)dealloc;
- (id)initWithFigDictionary:(id)a0;

@end
