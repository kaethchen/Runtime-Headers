@class NSDictionary;

@interface AVMovieAtom : NSObject {
    NSDictionary *_movieParsingMessageFigDictionary;
    AVMovieAtom *_container;
}

@property (readonly) unsigned int atomType;
@property (readonly) long long atomOffset;
@property (readonly) AVMovieAtom *container;

- (void)dealloc;
- (id)initWithFigDictionary:(id)a0;
- (id)initWithFigDictionary:(id)a0 :(unsigned long long)a1;

@end
