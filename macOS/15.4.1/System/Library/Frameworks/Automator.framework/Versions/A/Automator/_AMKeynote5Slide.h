@class NSString, _AMKeynote5SlideTransition, _AMKeynote5MasterSlide;

@interface _AMKeynote5Slide : _AMKeynote5Item

@property (copy) NSString *body;
@property (copy) _AMKeynote5MasterSlide *master;
@property (copy) NSString *notes;
@property BOOL skipped;
@property (readonly) long long slideNumber;
@property (copy) NSString *title;
@property (readonly, copy) _AMKeynote5SlideTransition *transition;

- (void)show;
- (long long)id;
- (void)jumpTo;

@end
