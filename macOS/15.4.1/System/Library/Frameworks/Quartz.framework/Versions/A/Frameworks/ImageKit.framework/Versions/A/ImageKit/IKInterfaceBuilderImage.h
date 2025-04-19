@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)path;
- (void)setPath:(id)a0;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
