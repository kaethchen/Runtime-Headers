@class NSString, _AMiDVDMenu;

@interface _AMiDVDMovie : _AMiDVDItem

@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property (copy) NSString *path;
@property (readonly) double percentEncoded;

@end
