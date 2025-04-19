@class NSString;

@interface SODetailViewImageBrowserItem : NSObject

@property (retain, nonatomic) NSString *path;

+ (id)itemWithPath:(id)a0;

- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;

@end
