@class NSString, _AMiDVDMenu;

@interface _AMiDVDDropzone : _AMiDVDItem

@property (copy) NSString *moviePath;
@property (copy) NSString *name;
@property (readonly) long long numberOfAssets;
@property (readonly, copy) _AMiDVDMenu *parent;

- (id)images;

@end
