@class _AMKeynote5Slide, NSString;

@interface _AMKeynote5Slideshow : _AMKeynote5Item

@property (copy) _AMKeynote5Slide *currentSlide;
@property (readonly) BOOL playing;
@property (readonly) BOOL modified;
@property (copy) NSString *name;
@property (copy) NSString *path;

- (id)slides;
- (id)docThemes;
- (id)masterSlides;

@end
