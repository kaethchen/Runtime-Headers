@class NSString, _AMiDVDSlideshow;

@interface _AMiDVDImage : _AMiDVDItem

@property (copy) NSString *comment;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDSlideshow *parent;
@property (copy) NSString *path;
@property (copy) NSString *title;

@end
