@class NSNumber, KHProject, NSString;

@interface KHJPEGGenerator : NSObject

@property (readonly, nonatomic) NSNumber *resolution;
@property (readonly, nonatomic) NSNumber *compressionQuality;
@property (readonly, nonatomic) KHProject *project;
@property (nonatomic) BOOL generateThumbnails;
@property (retain, nonatomic) NSString *thumbnailDirectoryName;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailEnclosingSize;

+ (BOOL)writeImage:(struct CGImage { } *)a0 toPath:(id)a1 option:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProject:(id)a0;
- (BOOL)generateBitmapImageAtPath:(id)a0 forLayout:(id)a1;
- (void)generateLayoutBitmapsInDirectoryAtPath:(id)a0 usingBlock:(id /* block */)a1;

@end
